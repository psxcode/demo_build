#pragma once

//*****************************************************
// Options -------------------------------------------

// String type -----------------------------------------------
#define DBSOPT_STRING_TYPE_STL		1
#define DBSOPT_STRING_TYPE_OGRE		2
//------------------------------------------------------------

// SharedPtr type --------------------------------------------
#define DBSOPT_SHARED_PTR_STL		1
#define DBSOPT_SHARED_PTR_OGRE		2
#define DBSOPT_SHARED_PTR_BOOST		3
//------------------------------------------------------------

// Delegate type ---------------------------------------------
#define DBSOPT_DELEGATE_TYPE_BOOST				1
#define DBSOPT_DELEGATE_TYPE_STL				2
#define DBSOPT_DELEGATE_TYPE_DON_CLUGSTON		3
#define DBSOPT_DELEGATE_TYPE_SERGEY_RYAZANOV	4
//------------------------------------------------------------

// Options -------------------------------------------
//****************************************************

//****************************************************
// Pre Config ----------------------------------------

//string
#define DBS_STRING_TYPE			DBSOPT_STRING_TYPE_OGRE

//shared_ptr
#define DBS_SHARED_PTR_TYPE		DBSOPT_SHARED_PTR_BOOST

//delegate
#define DBS_DELEGATE_TYPE		DBSOPT_DELEGATE_TYPE_DON_CLUGSTON

// Pre Config -----------------------------------------
//*****************************************************

//****************************************************
// Post Config ---------------------------------------

#if DBS_STRING_TYPE == DBSOPT_STRING_TYPE_STL
#define DBS_STRING_STL
#elif DBS_STRING_TYPE == DBSOPT_STRING_TYPE_OGRE
#define DBS_STRING_OGRE
#endif

#if DBS_SHARED_PTR_TYPE == DBSOPT_SHARED_PTR_STL
#define DBS_SHARED_PTR_STL
#elif DBS_SHARED_PTR_TYPE == DBSOPT_SHARED_PTR_OGRE
#define DBS_SHARED_PTR_OGRE
#elif DBS_SHARED_PTR_TYPE == DBSOPT_SHARED_PTR_BOOST
#define DBS_SHARED_PTR_BOOST
#endif

#if DBS_DELEGATE_TYPE == DBSOPT_DELEGATE_TYPE_DON_CLUGSTON
#define DBS_DELEGATE_DON_CLUGSTON
#elif DBS_DELEGATE_TYPE == DBSOPT_DELEGATE_TYPE_SERGEY_RYAZANOV
#define DBS_DElEGATE_SERGEY_RYAZANOV
#endif

#if defined DEMO_STATIC_BUILD || defined DEMO_EXE_BUILD
#	define _DemoExport
#else
#	if defined DEMO_NONCLIENT_BUILD
#		define _DemoExport __declspec( dllexport )
#	else
#		define _DemoExport __declspec( dllimport )
#	endif
#endif

// Post Config ---------------------------------------
//****************************************************
#pragma once

#ifdef MR_PLATFORM_WINDOWS
	#ifdef MR_BUILD_DLL
		#define MYRO_API __declspec(dllexport)
	#else
		#define MYRO_API __declspec(dllimport)
	#endif
#else
	#error Myro only supports Windows!
#endif // MR_BUILD_DLL

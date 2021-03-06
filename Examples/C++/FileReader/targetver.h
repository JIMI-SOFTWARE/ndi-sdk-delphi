#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <winsdkver.h>

////////////////////////////////////////////////////////////////////////////////

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif

////////////////////////////////////////////////////////////////////////////////

#include <sdkddkver.h>

////////////////////////////////////////////////////////////////////////////////

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef STRICT
#define STRICT
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif

////////////////////////////////////////////////////////////////////////////////

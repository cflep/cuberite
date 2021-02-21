
#pragma once

#define BUILD_ID

#ifdef BUILD_ID

#undef BUILD_ID

#define BUILD_SERIES_NAME "local build"
#define BUILD_ID          "Unknown"
#define BUILD_COMMIT_ID   "approx: 81e299f00ce3df587166ccc94f5997555cce5210"
#define BUILD_DATETIME    "approx: 2021-02-20 16:24:13 +0000"
#endif


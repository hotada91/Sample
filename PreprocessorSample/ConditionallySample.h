#pragma once

#include "Header.h"

#if !__has_include("Header.h")
#include "Header.h"
#endif

#define HEADER_FILE "Header.h"
#if __has_include(HEADER_FILE)
#define MES "File" HEADER_FILE "is included"
#else
#define MES "File" HEADER_FILE "is not included"
#endif

#if (1*1 + 1 - 1 == 1)
#define MES "Preprocessor can calculate!!!"
#endif

#define YEAR 2022
#if (YEAR > 2021)
#define MES "I'm over 30"
#endif
// #if !defined(MES)
// #if !defined MES
// #if not defined MES
// #if not defined(MES)
#ifndef MES
#define MES "Nothing to say"
#endif
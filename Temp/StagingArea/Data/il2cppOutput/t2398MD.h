﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2398;
struct t8;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17927_gshared (t2398 * __this, const MethodInfo* method);
#define m17927(__this, method) (( void (*) (t2398 *, const MethodInfo*))m17927_gshared)(__this, method)
extern "C" int32_t m17928_gshared (t2398 * __this, t8 * p0, t8 * p1, const MethodInfo* method);
#define m17928(__this, p0, p1, method) (( int32_t (*) (t2398 *, t8 *, t8 *, const MethodInfo*))m17928_gshared)(__this, p0, p1, method)

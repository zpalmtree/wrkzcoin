// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#if defined(__cplusplus) && __cplusplus >= 201703L && defined(__has_include)
#if __has_include(<filesystem>)
#define GHC_USE_STD_FS
#include <filesystem>
#if !defined(__ANDROID__)
namespace fs = std::filesystem;
#endif
#endif
#endif
#if defined(GHC_USE_STD_FS) || defined(__ANDROID__)
#include <filesystem/include/ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#endif


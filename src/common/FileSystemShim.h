// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

/* Check if we have the <filesystem> header, or just <experimental/filesystem> */
#if __has_include(<filesystem>)
#include <filesystem>
namespace fs = std::filesystem;
#elif __has_include(<experimental/filesystem>)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#if defined(GHC_USE_STD_FS) || defined(__ANDROID__)
#include <filesystem/include/ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#else
#error Your compiler does not support either <filesystem> or <experimental/filesystem>. Please upgrade to one that does.
#endif
#endif

// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#if __has_include(<filesystem>)
#if !defined(__ANDROID__)
#include <filesystem>
namespace fs = std::filesystem;
#else
#include <filesystem/include/ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#endif
#elif __has_include(<experimental/filesystem>)
#if !defined(__ANDROID__)
#include <experimental/filesystem>
namespace fs = std::experimental::filesystem;
#else
#include <filesystem/include/ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#endif
#endif

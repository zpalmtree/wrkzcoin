// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#if __has_include(<filesystem>)
#include <filesystem>
#if !defined(__ANDROID__)
namespace fs = std::filesystem;
#else
#include <filesystem/include/ghc/filesystem.hpp>
namespace fs = ghc::filesystem;
#endif
#endif

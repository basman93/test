cmake_minimum_required(VERSION 2.6)
project(Testing)
set(Testing_VERSION_MAJOR 1)
set(Testing_VERSION_MINOR 0)

configure_file(
  "${PROJECT_SOURCE_DIR}/TestingConfig.h.in"
  "${PROJECT_BINARY_DIR}/TestingConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")

add_executable(Test source)

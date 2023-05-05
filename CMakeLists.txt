cmake_minimum_required(VERSION 3.1)

include(FetchContent)

add_executable(main ./main.cpp)

FetchContent_Declare(
  pybind11
  GIT_REPOSITORY https://github.com/pybind/pybind11.git
  GIT_TAG        v2.10.4
)

FetchContent_GetProperties(pybind11)
if(NOT pybind11_POPULATED)
  FetchContent_Populate(pybind11)
  add_subdirectory(./build/_deps/pybind11-src)
endif()

target_link_libraries(main pybind11::embed)

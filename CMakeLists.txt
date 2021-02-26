cmake_minimum_required(VERSION 3.8)
project(cpp_project_template)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


include_directories("./include")



set(SOURCE_LIST)
file(GLOB_RECURSE SOURCE_LIST ./source/*.cpp)

add_executable(test ${SOURCE_LIST})
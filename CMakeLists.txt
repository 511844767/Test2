cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)

project(test C CXX)

# add_library(hook SHARED hook.cpp)
add_library(hook STATIC hook.cpp)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC hook)

add_custom_target(run COMMAND $<TARGET_FILE:main> WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})

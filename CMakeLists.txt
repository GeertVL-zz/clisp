cmake_minimum_required(VERSION 3.6)
project(clisp)

set(CMAKE_C_STANDARD 99)
set(EDITLINE_DIRECTORY D:\\works\\clibs\\wineditline-2.201)
set(EDITLINE_INCLUDE_DIRECTORY ${EDITLINE_DIRECTORY}\\include)

LINK_DIRECTORIES(${EDITLINE_DIRECTORY}\\lib32)
INCLUDE_DIRECTORIES(${EDITLINE_INCLUDE_DIRECTORY})

set(SOURCE_FILES main.c mpc/mpc.h mpc/mpc.h parsing.c)
add_executable(clisp ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(clisp edit_static)
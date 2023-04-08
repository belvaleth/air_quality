# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

set(ZEPHYR_INCLUDE_DIR "D:/ncs/v2.3.0/zephyr/include/zephyr")
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
include_directories(${ZEPHYR_INCLUDE_DIR})
project(hello_world)

set(SRC_MAIN src/main.c)

target_sources(app PRIVATE ${SRC_MAIN})

cmake_minimum_required(VERSION 3.13)

set(target "wisdom_hal_extension")
project(${target} C CXX ASM)

add_subdirectory(./modules/radio)

add_library(${target} INTERFACE)

target_sources(${target} INTERFACE
	src/modules/radio_weak.c
)

target_include_directories(${target} INTERFACE
	src
	modules
)

target_link_libraries(${target} INTERFACE
	whale_radio_module
)

cmake_minimum_required(VERSION 2.8)
project(test)
message(STATUS "adding include directories")
include_directories(
	${CMAKE_SOURCE_DIR}/as_lib
	${CMAKE_SOURCE_DIR}/bs/bs_lib
	${CMAKE_SOURCE_DIR}/cs_lib
)
message(STATUS "added include directories")
add_library(as_lib
	${CMAKE_SOURCE_DIR}/as_lib/a.cpp
	${CMAKE_SOURCE_DIR}/as_lib/a.h
)
message(STATUS "added as_lib library")
add_library(bs_lib
	${CMAKE_SOURCE_DIR}/bs/bs_lib/b.cpp
	${CMAKE_SOURCE_DIR}/bs/bs_lib/b.h
)
message(STATUS "added bs/bs_lib library")
add_library(cs_lib
	${CMAKE_SOURCE_DIR}/cs_lib/c.cpp
	${CMAKE_SOURCE_DIR}/cs_lib/c.h
)
message(STATUS "added cs_lib library")
add_executable(test test/test.cpp)
message(STATUS "added test exec")
target_link_libraries(test cs_lib bs_lib as_lib ${EXTERNAL_LIBS})
set(CMAKE_BUILD_TYPE Release)

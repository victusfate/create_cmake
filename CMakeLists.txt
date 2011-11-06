cmake_minimum_required(VERSION 2.8)
project(test)
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



message(STATUS "adding include directories")
include_directories(
	${CMAKE_SOURCE_DIR}/as_lib
	${CMAKE_SOURCE_DIR}/bs/bs_lib
	${CMAKE_SOURCE_DIR}/cs_lib
)
message(STATUS "added include directories")



add_executable(test test/test.cpp)
target_link_libraries(test cs_lib bs_lib as_lib ${EXTERNAL_LIBS})
message(STATUS "added test exec and target link libraries cs_lib bs_lib as_lib")

add_executable(test2 test2_exec/test2.cpp)
target_link_libraries(test2 cs_lib bs_lib as_lib ${EXTERNAL_LIBS})
message(STATUS "added test2 exec and target link libraries cs_lib bs_lib as_lib")

set(CMAKE_BUILD_TYPE Release)

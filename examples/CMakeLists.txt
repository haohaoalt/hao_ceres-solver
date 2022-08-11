cmake_minimum_required(VERSION 3.10)
project(ceres_demo)

cmake_minimum_required(VERSION 2.8)
project(ceres)
set(Ceres_DIR "/home/hao007/haolib/ceres-solver/ceres-solver/install/lib/cmake/Ceres")
find_package(Ceres 2.0.0 REQUIRED)
#find_package(Ceres REQUIRED)
include_directories(${CERES_INCLUDE_DIRS})

add_executable(ceres_demo helloworld.cpp)
target_link_libraries(ceres_demo ${CERES_LIBRARIES})
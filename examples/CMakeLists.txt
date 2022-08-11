cmake_minimum_required(VERSION 3.10)
project(ceres_demo)

cmake_minimum_required(VERSION 2.8)
project(ceres)
set(Ceres_DIR "/home/hao007/haolib/ceres-solver/ceres-solver/install/lib/cmake/Ceres")
find_package(Ceres 2.0.0 REQUIRED)
find_package(OpenCV REQUIRED)#寻找OpenCV.CMakeLists,以此找到包,并赋值各库相关变量

#find_package(Ceres REQUIRED)
include_directories(
    ${CERES_INCLUDE_DIRS}
    ${OpenCV_INCLUDE_DIRS})

add_executable(ceres_demo helloworld.cpp)
target_link_libraries(ceres_demo ${CERES_LIBRARIES})

add_executable(ceres_demo_num numericdiff.cpp)
target_link_libraries(ceres_demo_num ${CERES_LIBRARIES})

add_executable(curve_fitting curve_fitting.cpp)
target_link_libraries(curve_fitting ${CERES_LIBRARIES} ${OpenCV_LIBRARIES}) 
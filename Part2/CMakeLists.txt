cmake_minimum_required(VERSION 3.10)

project(FaceDetection)

set(OpenCV_DIR D:/opencv/build/x64/vc16/lib)
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(${PROJECT_NAME} src/Main.cpp)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})


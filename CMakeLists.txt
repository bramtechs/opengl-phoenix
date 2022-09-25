cmake_minimum_required(VERSION 3.7)

project(phoenix)
add_executable(phoenix src/main.c)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(phoenix ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )
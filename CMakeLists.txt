cmake_minimum_required(VERSION 2.8.3)
project(robo_ctrller)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy

)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS
)

include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

set(CMAKE_CXX_FLAGS "-std=c++11 -O3")

add_library(base_ctrl
  src/BaseControl.cpp
)
target_link_libraries(base_ctrl
  ${catkin_LIBRARIES}
)

add_library(climb_ctrl
  src/ClimbControl.cpp
)
target_link_libraries(climb_ctrl
  ${catkin_LIBRARIES}
)




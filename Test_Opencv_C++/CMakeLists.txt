cmake_minimum_required(VERSION 2.6)
project( DisplayImage )

include_directories(include)
file(GLOB SOURCES "src/*.cpp")


add_executable( DisplayImage ${SOURCES})

find_package( OpenCV REQUIRED )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )
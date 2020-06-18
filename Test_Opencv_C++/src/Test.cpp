// Usage as a test for opencv to check its instalation
// add this lines to CMakeLists.txt

/* cmake_minimum_required(VERSION 2.6)
project( DisplayImage )

include_directories(include)
file(GLOB SOURCES "src/Test.cpp")


add_executable( DisplayImage ${SOURCES})

find_package( OpenCV REQUIRED )
target_link_libraries( DisplayImage ${OpenCV_LIBS} )
 */

// build it by cmake ../ and make in ./build folder
// ./DisplayImage ../resources/Lenna.png


#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }

    Mat image;
    image = imread( argv[1], 1 );

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

    return 0;
}
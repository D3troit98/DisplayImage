#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <iostream>
#include "opencv2/videoio.hpp"
#include "opencv2/tracking.hpp"

using namespace cv;
using namespace std;



/////////////// images /////////

int main() {

	string path = "test.jpg"; // directory of image
	
	Mat img = imread(path);  // read the image
	if (img.empty())
	{
		return 0;
	}
	imshow("Image", img);
	waitKey(0);
	return 0;


}
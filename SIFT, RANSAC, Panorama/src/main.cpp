#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <opencv2/opencv.hpp>
#include <opencv2/nonfree/features2d.hpp>
#include "Ransac.cpp"

using namespace std;
using namespace cv;

int main(){

	Ransac rs;
	rs.run();


	return 0;
}
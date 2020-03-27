// 3.07-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;


int main()
{
	VideoCapture cap;
	cap.open(0);
	cv::Mat  output1,output2, input,output11,output22;
	cap >> input;
	cv::Sobel(input, output1,CV_16SC1 , 1, 0, 3, 1, 0, BORDER_DEFAULT);
	cv::Sobel(input, output2, CV_16SC1, 0, 1, 3, 1, 0, BORDER_DEFAULT);
	convertScaleAbs(output1,output11);
	convertScaleAbs(output2, output22);
	imshow("x一阶", output11);
	waitKey(0);
	imshow("y一阶", output22);
	waitKey(0);
    return 0;
}


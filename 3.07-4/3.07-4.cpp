// 3.07-4.cpp : �������̨Ӧ�ó������ڵ㡣
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
	imshow("xһ��", output11);
	waitKey(0);
	imshow("yһ��", output22);
	waitKey(0);
    return 0;
}


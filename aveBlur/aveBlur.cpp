#include <iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	VideoCapture cap(0);//调用摄像头
	while (1)
	{
		cv::Mat frame;
		cv::Mat detectMat;
		cap >> frame;//捕捉当前帧
		blur(frame, detectMat, Size(3, 3));//进行均值滤波处理
		cv::imshow("frame", frame);//显示当前图像
		cv::imshow("aveBlur", detectMat);//显示均值滤波处理后图像
		waitKey(30);
	}
}
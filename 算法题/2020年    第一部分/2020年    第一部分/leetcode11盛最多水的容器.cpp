#include<iostream>
using namespace std;
#include "Compile.h"

#include <vector>

//int maxArea(vector<int>& height) {
//	 //暴力解法     超出时间限制
//	int length = height.size();
//	int maxCapcity = 0;
//	for (int i = 0; i < length-1; i++)
//	{
//		for (int j = i + 1;j < length;j++)
//		{
//			int area = (j - i) * (height[i] < height[j] ? height[ i] : height[j]);
//			if (area > maxCapcity)
//			{
//				maxCapcity = area;
//			}
//		}
//	}
//	cout << maxCapcity << endl;
//	return maxCapcity;
//}

int maxArea(vector<int>& height)
{
	return 0;
}
#ifdef 盛最多水的容器
int main()
{
	vector<int> source = { 1,8,6,2,5,4,8,3,7 };
	maxArea(source);
	return 0;
}
#endif



// 数组的输入输出.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//可以使用循环输入输出每一个数组元素的值


#include<stdio.h>
int main()
{
	int a[10];//定义
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", a[i]);//scanf为输入
	}//输入
	for (int i = 0; i, 10; i++)
	{
		printf("%2d", a[i]);
	}//输出
}
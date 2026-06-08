#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Add(int x, int y);//这里的x，y可以不写
#include "add.h"//分开来就是不报警告了



#pragma comment(lib, "add.lib")
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);


	/*int ret = Sub(a, b);
	printf("%d", ret);*/
	return 0;
}
//int Add(int x, int y)
//{
//	return x + y;
//}
//add.h和add.c属于一个模块
//用官方库用<>，自己写的用“”
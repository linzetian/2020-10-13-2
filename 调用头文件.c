#include<stdio.h>
#include"Add.h"//调用头文件
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n",sum);
}
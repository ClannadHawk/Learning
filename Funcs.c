#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funcs.h"



void sortOfStr()
{
	char * str = (char *)malloc(sizeof(char) * 100);
	char * temp = (char *)malloc(sizeof(char) * 5);
	printf("输入一串字符：");
	scanf_s("%s", str, 99);
	for (int i = 0; *(str + i) == '\0'; i++)
	{
		printf("%c", *(str + i));
		for (int j = 0; *(str + j) == '\0'; i++)
		{
			printf("%c", *(str + j));
			if (*(str + i) < *(str + j))
			{
				*(temp) = *(str + i);
				*(str + i) = *(str + j);
				*(str + j) = *(temp);
			}
		}
	}
	printf("%s", str);

}

void circleOfThr()
{
	int sum = 0;
	printf("输入人数：");
	scanf_s("%d", &sum);
	int * num = (int*)malloc(sizeof(int)*sum);
	for (int i = 0; i < sum; i++)
	{
		*(num + i) = 0;
	}
	int countNum = 0;
	int index = 0;
	int rest = sum;
	while (rest > 1)
	{
		printf("%d", *(num + index));
		if (*(num + index) == 0)
		{
			countNum++;
			if (countNum == 3)
			{
				countNum = 0;
				*(num + index) = 1;
				rest--;
			}
		}
		index++;	
		if (index == sum)
		{
			index = 0;
		}
	}

	printf("最后留下的是原来第 %d 号的那位。", index);

}

void numToMonth()
{
	int month = 0;
	char * mon[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	printf("请输入月份：");
	scanf_s("%d", &month);
	printf("%s", *(mon + month - 1));

}

// WordCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
void charcount(char filtxt[100])//统计TXT文件中的字符数
{
	int count = 0;
	FILE *f = fopen(filtxt, "r");
	if (f == NULL)
	{
		printf("ERROR");

	}
	while (getc(f) != EOF)
	{
		count++;
	}
	printf("字符数：%d", count);
	fclose(f);
}

void wordrcount(char filtxt2[100])//统计TXT文件中的单词数
{
	int count2 = 0;
	char ch;
	FILE *fw = fopen(filtxt2, "r");
	if (fw == NULL)//文件打开失败 退出
	{
		printf("ERROR");

	}
	while (ch = getc(fw) != EOF)
	{
		if (ch == ' ' || ch == '/n' || ch == ',' || ch == '/t')//单词被',',' ','/n','/t'四个字符隔开
		{
			count2++;
		}

	}
	printf("单词数：%d", count2);
	fclose(fw);
}

void Operator(char jud[3], char filtxt[100])//制作控制参数
{
	if (jud[0] == '-'&&jud[1] == 'c')
	{
		charcount(filtxt);
	}//如果输出-c，统计字符数
	else if (jud[0] == '-'&&jud[1] == 'w')
	{
		wordrcount(filtxt);
	}//如果输入-w，统计单词书
}
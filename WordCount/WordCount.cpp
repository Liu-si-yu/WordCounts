// WordCount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
void charcount(char filtxt[100])//ͳ��TXT�ļ��е��ַ���
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
	printf("�ַ�����%d", count);
	fclose(f);
}

void wordrcount(char filtxt2[100])//ͳ��TXT�ļ��еĵ�����
{
	int count2 = 0;
	char ch;
	FILE *fw = fopen(filtxt2, "r");
	if (fw == NULL)//�ļ���ʧ�� �˳�
	{
		printf("ERROR");

	}
	while (ch = getc(fw) != EOF)
	{
		if (ch == ' ' || ch == '/n' || ch == ',' || ch == '/t')//���ʱ�',',' ','/n','/t'�ĸ��ַ�����
		{
			count2++;
		}

	}
	printf("��������%d", count2);
	fclose(fw);
}

void Operator(char jud[3], char filtxt[100])//�������Ʋ���
{
	if (jud[0] == '-'&&jud[1] == 'c')
	{
		charcount(filtxt);
	}//������-c��ͳ���ַ���
	else if (jud[0] == '-'&&jud[1] == 'w')
	{
		wordrcount(filtxt);
	}//�������-w��ͳ�Ƶ�����
}
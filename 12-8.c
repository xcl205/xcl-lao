#include<stdio.h>//��ӡ1000��2000����
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <=2000;year++)
//		if (year % 4 == 0)	
//			if (year % 100 != 0)
//				printf("%d ", year);		
//		if (year % 400 == 0)
//			printf("%d ", year);
//	return 0;
//}
int run(int x)
{
	int i = 0;
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		i = 1;
	}
	else 
		i = 0;
	return i;
}
int main()//���ú����ж�����

{
	int year = 0;
	printf("������ݣ�");
	scanf_s("%d", &year);
	int i=run(year);
	if (i)
		printf("%d��������", year);
	else
	{
		printf("%d�겻������", year);
	}
	return 0;
}
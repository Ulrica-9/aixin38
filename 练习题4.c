//�ṹ������Ĵ�ӡ

//#include <stdio.h>
//#include <math.h>
//struct student
//{
//	char name;
//	int age;
//	char sex;
//	int grade;
//	struct student* next;
//};
//void print(struct student* p)
//{
//	while (p)
//	{
//		printf("%c %d %c %d",p->name,p->age,p->sex,p->grade);
//		p = p->next;
//		printf("\n");
//	}
//}
//void fun(struct student* p)
//{
//
//}
//int main(void)
//{
//	struct student stu = { 'L',18,'n',99 };
//	struct student stu2 = { 'X',20,'v',100 };
//	struct student stu3 = { 'V',30,'n',99 };
//	struct student* p;
//	struct student* head;
//	p = head = &stu;
//	stu.next = &stu2;
//	stu2.next = &stu3;
//	stu3.next = NULL;
//	print(p);
//	fun(p);
//
//	return 0;
//}


//�ѽṹ�������������
#include <stdio.h>
#include <string.h>
struct student
{
	int num;
	int grade;
	struct student* next;
}stu[3] = { {1001,100} ,{1002,99}, {1003,101} };
void print(struct student* p,int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("num:%d  grade:%d\n", (p+i)->num, (p+i)->grade);
	}
	
}
void fun(struct student* p,int len)
{
	//������������
	//����ð�ݷ���������
	int p1;
	int i, j;
	for (i = 0; i<len ; i++)
	{
		for (j = i; j < len ; j++)
		{
			if ((p+i)->grade < (p + j)->grade)
			{
				//�����ɼ�:
				//��ʱ����:
				p1 = ((p+i)->grade);
				(p+i)->grade = (p + j)->grade;
				(p + j)->grade = p1;
				//����ѧ��:
				p1 = ((p + i)->num);
				(p + i)->num = (p + j)->num;
				(p + j)->num = p1;

			}
		}
	}

}
int main(void)
{
	struct student* p;
	p = stu;
	print(p,3);
	fun(p, 3); 
	printf("�����:\n");
	print(p, 3);
	return 0;
}
#include<stdio.h>
#include<string.h>
union student
{
	int rno;
	char name[10];
	float per;
};
int main()
{
	union student s={123,"Nayana",99.99};
	printf("%d %s %f",s.rno,s.name,s.per);
}

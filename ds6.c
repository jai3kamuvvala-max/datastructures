#include<stdio.h>
struct address
{
	char street[50];
	char city[50];
	long int pincode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"jaitrika",99.89,{"brts road","vij",52012}};
	printf("%d %s %f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pincode);
	return 0;
	}

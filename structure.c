#include<stdio.h>
struct employee
{
	char name[25];
	int age;
	int no;
	int salary;
	
}emp[20];
int main()
{
	int i,n;
	printf("Enter no. of employees in your company");
	scanf("%d",&n);
	printf("enter emp name,age,phone num,salary in the same order");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %d",emp[i].name,&emp[i].age,&emp[i].no,&emp[i].salary);
	}
	printf("empname\tempage\tempphonenum\tempsalary \n");
    for(i=0;i<n;i++)
	{
		printf("%s \t%d \t%d       \t%d \n",emp[i].name,emp[i].age,emp[i].no,emp[i].salary);
	}
	return 0;
}

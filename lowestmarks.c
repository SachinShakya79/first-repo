/*
student structure.c
*/
#include<stdio.h>
#include<stdlib.h>
struct student{
	int id;
	char name[30];
	float marks;	
};
int main()
{
	int i=0, n=0, gre=0;
	struct student a[30];
	printf("how many entry to enter = ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("\nEnter student name = ");
		scanf("%s",a[i].name);
		printf("Enter student id = ");
		scanf("%d",&a[i].id);
		printf("Enter the marks = ");
		scanf("%f",&a[i].marks);
	}
	gre=a[0].marks;
	printf("\n\nAccording to lowest marks = \n");
	for(i=1; i<n; i++)
	{
		if(gre>a[i].marks)
		{
			gre=a[i].marks;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i].marks==gre)
		{
			printf("\nId = %d",a[i].id);
			printf("\nName = %s",a[i].name);
			printf("\nMarks= %.2f",a[i].marks);
		}
	}
	return 0;
}


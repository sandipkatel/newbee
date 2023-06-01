#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
    char name[30];
    float marks;
};

int main()
{
struct student data[100];
int num,i;
printf("Enter how many students");
scanf("%d",&num);
for (i=0;i<num;i++)
{
    printf("Enter the name of %d student",i+1);
    scanf("%s",data[i].name);
    printf("Enter the marks of %d student",i+1);
    scanf("%f",&data[i].marks);
}
printf("NAME:\t");
for (i=0;i<num;i++)
{
    printf("%s\t",data[i].name);
}
printf("\nMARKS:\t");
for (i=0;i<num;i++)
{
    printf("%.2f\t",data[i].marks);
}
}

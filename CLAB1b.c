#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char sentence[50]="idea without execution is worthless";
    int i,num;
    for (i=0;i<strlen(sentence);i++)
    {
        if(*(sentence + i)!='c')
        num+=1;
        else
        break;
    }
    printf("Position is %d",num);
}
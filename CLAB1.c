#include<stdio.h>
#include<conio.h>
int main()
{
    int startyear,endyear;
    float month[10][12],years[10]={0};
    int i,j;
    printf("Enter the starting year");
    scanf("%d",&startyear);
    printf("Enter the ending year");
    scanf("%d",&endyear);
    for (i=0;i<(endyear-startyear+1);i++)
    {
        for (j=0;j<12;j++)
        {
           printf("Enter the expenditure of %d year %d month",i+1,j+1);
            scanf("%f",&month[i][j]);
            years[i]+=month[i][j];
        }
    }
    
printf("Your average is");
printf("-----------------------\n");
for (i=0;i<(endyear-startyear+1);i++)
{
    printf("\t\tYear\tJAN\tFEB\tMARCH\tAPRIL\tMAY\tJUNE\tJULY\tSEP\tOCT\tNOV\tDEC\n");
    printf("Expenditure\t%d\t",startyear+i);
    for (j=0;j<12;j++)
    {
        printf("%.2f\t",month[i][j]);
    }
    printf("\nAVERAGE THIS YEAR:%.2f",years[i]/12);
    printf("\n");
}
    return 0;
}

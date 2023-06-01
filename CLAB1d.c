/*3. Store and retrieve the name of the students and obtained marks in c programming in 1st semester using
 structure.*/

 #include <stdio.h>
 #include <conio.h>
 #include <string.h>
struct students{
    char name[15];
    float mark;
    }s;

void store_data(char name[]);
void retrive_data(char file[]);

 /*
 struct students{
    char name[15];
    float marks[3];
}s[10];

int main()
 {
    int i,j,k,n;
    char ram[20];
    printf("Enter the number of students:  ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Enter for student %d:",i+1);
        printf("\nName  : ");
        scanf("%s",s[i].name);
        printf("Enter mark Obtained:\n");
        for(j=0;j<3;j++)
        {
            printf("Subject %d  : ",j+1);
            scanf("%f",&s[i].marks[j]);
        }
    }
    FILE *store = fopen("ctext.txt","w+");

    if (store==NULL)
    {
        printf("Unable to open file.");
        return 0;
    }
    for(i=0;i<n;i++)
    {
    fprintf(store,"\nStudent %d:\nName : %s\nMark Obtained :\n",i+1,s[i].name);
    for(j=0;j<3;j++)
    {
        fprintf(store,"Subject %d : %.2f\t\t\t\t",j+1,s[i].marks[j]);
    }
    }
    fclose(store);
    return 1;
 }*/

 int main()
 {
    int i,input;
    char file_name[20];
    printf("Enter file name  : ");
    scanf("%s",file_name);
    printf("What do you want to do?\n");
    printf("1. Store data\n");
    printf("2. Retrive data\n");
    scanf("%d",&input);

    switch(input)
    {
        case 1:
        store_data(file_name);
        break;
        case 2:
        retrive_data(file_name);
        break;
        default:
        return 0;
    }
 }

 void store_data(char filename[20])
 {
    char character;
    FILE *fp = fopen(filename,"w+");
    if(fp == NULL)
    {
        printf("unable to open file");
    }
    do
    {
        printf("Enter student name  : ");
        scanf("%s",s.name);
        printf("Enter mark obtained in C Programming  : ");
        scanf("%f",&s.mark);
        fprintf(fp,"Name: %s\t\t\t\tMark in C: %.2f\n",s.name,s.mark);
        printf("Enter Y to continue OR enter any key to stop writing\n");
        scanf(" %c",&character);
    }
    while(character == 'Y');
    fclose(fp);
 }
 

 void retrive_data(char filename[20])
 {
    FILE *fp = fopen(filename,"r+");
    if(fp == NULL)
    {
        printf("Unable to open read mode.");
    }
    while(1)
    {
        fscanf(fp,"Name: %s\t\t\t\tMark in C: %f\n",s.name,&s.mark);
        printf("Name of student : %s",s.name);
        printf("\n\t\tMark Obtained in C : %f\n",s.mark);
        if (feof(fp))
            break;
    }
    fclose(fp);
 }
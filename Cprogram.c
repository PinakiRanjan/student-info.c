#include <stdio.h>
int main()
{
   char name[50];
   int id, i,j, num;
   float cgpa;
   printf("Enter number of students: ");
   scanf("%d", &num);
   FILE *fptr;
   fptr = (fopen("D:\115\student.txt", "a"));
   fprintf(fptr,"\tSL \tID  \tName \tCGPA \n");
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
   for(i = 0; i < num; ++i)
   {

      printf("Student number: %d\nEnter ID: ", i+1);
      scanf("%d", &id);
      printf("Enter name: ", i+1);
      scanf("%s", name);
      printf("Enter CGPA: ");
      scanf("%f", &cgpa);


    fprintf(fptr,"\t%d \t %d \t %s \t %f \n",i, id,name, cgpa);
   }
   fclose(fptr);
   return 0;
}

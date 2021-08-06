#include<stdio.h>
int main()
{
  int m;//m1=marks
  printf("Enter the Marks:");
  scanf("%d",&m);
  if(m<=100 && m>=85)
  {
    printf("Grade A");
   }
   else if(m<=84 && m>=70)
  {
    printf("Grade B");
   }
   else if(m<=69 && m>=55)
  {
    printf("Grade C");
   }
   else if(m<=54 && m>=40)
  {
    printf("Grade D");
   }
   else if(m<40)
  {
    printf("Grade F");
   }
   return 0;
 }

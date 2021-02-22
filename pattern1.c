// Printing basic patterns like 54321, 4321, 321, 21, 1.

#include<stdio.h>
int main()
{
    int i,j;
   for (i =0; i< 5; i++){
       for (j=5-i; j >= 1; j--){
           printf("%d", j);
       }
    printf(",");
   }

   return 0;
}
/*
Write a program to find power of a number using recursion
*/

# include <stdio.h>
int  i =0 , result = 1;
int power(int , int);
int main()
{
    int a,b;
    printf("Enter a, b");
    scanf("%d%d", &a, &b);

    int r =  power(a,b);
    printf("%d", r);

    return 0;
}

int power(int a, int b)
{

        result = a* result; 
        i++;

        if (i < b){
      
         return  power(a, b);
        }
return result;   
}

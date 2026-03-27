// Write a program to check whether a number are even or odd number should be enter by the user one by one.
#include<stdio.h>
int main()
{
    int i,n;
    do
    {   printf("Enter a number (0 to exit)\n");
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("The entered number is even.\n");
        }
        else{
            printf("The entered number is odd.\n");
        }
        printf("Enter 1 to continue or 0 to exit\n");
        scanf("%d",&i);
    }while(i==1);
    return 0;
}
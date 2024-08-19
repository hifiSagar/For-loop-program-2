/* & FOR LOOP
write a 'c' program to show multiply table for a given numbers
condition 1: number should be [provided by user]*/

#include<stdio.h>
int main(){
    int i=1,num;
    printf("enter a number \n");
    scanf("%d", &num);
    printf("result from for loop\n");
    for ( i = 1; i < 10; i++)
    {
         printf("%d*%d=%d\n",num,i,num*i);
    }
    
    return 0;
    }
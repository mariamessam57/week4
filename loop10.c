#include<stdio.h>
int main(){
    int num ,count=0;
    printf("enter number:");
    scanf("%d",&num);
   do
   {
    count++;
    num/=10;
   } while(num!=0);
   printf("number of digits= %d",count);
   
}
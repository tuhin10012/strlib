#include "strlib.c"
#include<stdio.h>
int main(void)
{
    char arr[25];
    char arr2[25];
    int n;
    scanf("%s",&arr);
    n=length(arr);
    stripDuplicates(arr,arr2);
    printf("%s\n",arr);
    printf("%s",arr2);
    getch();
    
    
    
    
    
 return 0;   
}

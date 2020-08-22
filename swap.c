#include<stdio.h>  
 int main()    
{    
int a=5, b=4;            
a=a+b;//a=9 (5+4)    
b=a-b;//b=5 (9-4)    
a=a-b;//a=4 (9-5)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   

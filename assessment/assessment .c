#include<stdio.h>  
main()  
{  
    int a, b;  
    char choice;  
  
      
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n"); 
	printf("Enter your choice : "); 
    scanf("%c", &choice);  
  
  
   printf("Enter numbers :");  
   scanf("%d", &a);  
    printf("Enter numbers :");  
   scanf("%d", &b);  
  
  
    switch(choice)  
    {  
        case '1': printf("addition : %d\n",(a+b));  
                break;  
  
        case '2': printf("Subtraction : %d\n",(a-b));  
                break;  
  
        case '3': printf("Multiplication : %d\n",(a*b));  
                break;  
  
        case '4': if( b != 0)  
                    printf("Division : %d\n",(a/b));  
                else  
                    printf("Number can't be divided by \0n");  
                break;  
  
        default: printf("You entered invalid choice\n");  
                 break;  
    }  
   
}

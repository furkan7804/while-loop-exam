#include<stdio.h>
main()
{
   int n,f,l ;
   printf ("Enter the number : ");
   scanf("%d",&n);
   l = n % 10;
   while (n >= 10){
    n = n / 10;

   } f = n ;
   int sum = f + l;
    printf("The sum of the f and the l : %d\n",sum); 


}

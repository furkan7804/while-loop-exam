#include<stdio.h>
main()
{
    int n,c=0;
    printf("enter the number : ");
    scanf("%d", &n);
    while (n !=0)
{
    n /=10;
    c++;

}
printf("Total number of digits : %d\n",c);



}
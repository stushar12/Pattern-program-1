#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter a number  ");
scanf("%d",&n);
char a='A';
for(int i=1;i<=n;i++)
{

    for(int j=n-i;j>=1;j--)
    {

        printf(" ");
    }
    for(int j=1;j<=i;j++)
    {

        printf("% ",a);
        a++;
    }

    printf("\n");

}
}

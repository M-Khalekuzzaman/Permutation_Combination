#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter your two numbers are : ");
    scanf("%d%d",&n,&r);
    int fact1 = 1,fact2 = 1,fact3 = 1;
    for(int i =1 ; i<=n ; i++)
    {
        fact1 = fact1 * i;
    }
    for(int j =1 ; j<=r ; j++)
    {
        fact2 = fact2 * j;
    }
    for(int k = 1 ; k<=n-r ;k++)
    {
        fact3 = fact3 *k;
    }
    double npr,ncr;
    npr = (float)fact1/fact3;
    ncr = (float)fact1/(fact2 * fact3);
    printf("The Permutation result is : %.2lf\n",npr);
    printf("The Combination result is : %.2lf\n",ncr);

    getch();

}

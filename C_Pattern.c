#include<stdio.h>
int main()
{
    int n,i,j,arr[4],min_value;
    printf("Enter the value of n:-");
    scanf("%d",&n);
    for(i=1;i<2*n;++i)
    {
        for(j=1;j<2*n;++j)  // using ternary operator finding the minimum value from   i,j,(2*n-i), (2*n-j)
        {
            int a = ((i<j)?i:j);
            int b = (((2*n-i)<a)?(2*n-i):a);
            min_value = (((2*n-j)<b)?(2*n-j):b);
            printf("%d ",(n+1-min_value));

        }//End j loop
        printf("\n");

    }//End i loop

}

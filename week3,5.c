#include <stdio.h>

int main()
{
    int N,i,s=0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) 
        {
         s=s+i;
        }
    printf("%d",s); 
    return 0;
}


#include <stdio.h>

int main()
{
    int N,i;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (i = 2; i <= N; i+=2) 
        {
            printf("%d ", i);
        }
    printf("\n"); 
    return 0;
}

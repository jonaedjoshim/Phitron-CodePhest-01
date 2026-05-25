#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[100], B[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int rev = n - 1 - i;
        int sum = A[i] + B[rev];

        printf("%d", sum);

        if (i != n - 1)
        {
            printf(" ");
        }
    }

    return 0;
}
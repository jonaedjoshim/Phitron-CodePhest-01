#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int first = (arr[i] % 2 + 2) % 2;
            int second = (arr[j] % 2 + 2) % 2;

            if (first != second)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[100005];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int expected = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == expected)
        {
            expected++;
        }
    }

    printf("%d\n", expected);

    return 0;
}
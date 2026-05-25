#include <stdio.h>

int main()
{
    char s1[2005],
        s2[2005];
    scanf("%s %s", s1, s2);

    int start,
        end;
    scanf("%d %d", &start, &end);

    int len_1 = 0;

    while (s1[len_1] != '\0')
    {
        len_1++;
    }

    int x = len_1;

    for (int i = start; i <= end; i++)
    {
        s1[x] = s2[i];
        x++;
    }

    s1[x] = '\0';

    printf("%s\n", s1);

    return 0;
}
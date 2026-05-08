#include <stdio.h>

int main()
{
    int n;
    int v;
    int positiveSum = 0;
    int negativeSum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);

        if (v > 0)
        {
            positiveSum = positiveSum + v;
        }
        else if (v < 0)
        {
            negativeSum = negativeSum + v;
        }
    }

    printf("%d %d\n", positiveSum, negativeSum);

    return 0;
}
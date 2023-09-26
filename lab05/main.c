#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "item.h"

extern void sort(Item *a, int lo, int hi);

int main()
{
    int n;
    if (scanf("%d", &n)){};

    Item *items = malloc(n * sizeof *items);

    for (int i = 0; i < n; i++)
    {
        int curr;
        if (scanf("%d", &curr)){};

        items[i] = curr;
    }

    clock_t start = clock();

    sort(items, 0, n);

    clock_t end = clock();    
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;

    for (int i = 0; i < n; i++)
        printf("%d ", items[i]);
    
    printf("%.12lf", seconds);

    free(items);

    return 0;
}

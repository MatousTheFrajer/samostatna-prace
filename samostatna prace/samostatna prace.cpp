#include<stdio.h>

int main()
{
    int cislo = 6;
    int soucetsudy = 0;
    int soucetlichy = 0;
    for (int i = 1; i <= cislo; i++) {
        if (i % 2 == 0) soucetsudy += i;
        else if (i % 2 != 0) soucetlichy += i;

    }
    printf("sudy soucet: %d\n", soucetsudy);
    printf("lichy soucet: %d\n", soucetlichy);
}
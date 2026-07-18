#include <stdio.h>

int main()
{
    printf("\nBilangan berpangkat 2 dari 1 sampai 10\n");

for (int i = 1; i <=10; i++)
{
    int hasil = 1 * i;
    printf("%d^2 = %d\n", i,hasil);
}
return 0;
}

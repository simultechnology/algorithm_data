#include <stdio.h>
#include <stdlib.h>

#define NMAX 10

int main(void) {
    int buf, sum, count, n;
    int array[NMAX];

    count = 0;
    do {
        printf("整数を入力してください(0を入力すると終了):");
        scanf("%d", &buf);
        if (buf) {
            array[count] = buf;
            count++;
        }

    } while(buf != 0);

    printf("--入力されたのは以下の数です--\n");
    for (sum = n = 0; n < count; n++) {
        printf("%d \t", array[n]);
        sum += array[n];
    }
    printf("合計は %d です\n", sum);

    return EXIT_SUCCESS;
}
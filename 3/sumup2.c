#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int buf, sum, count, n, i;
    int *array;

    /* 入力するデータの個数を最初に聞いて、必要なメモリを確保 */
    printf("何個の数値を入力しますか:");
    scanf("%d", &count);
    array = (int*)malloc(sizeof(int) * count);

    n = 0;
    do {
        printf("整数を入力してください(0を入力すると終了):");
        scanf("%d", &buf);
        if (buf) {
            array[n] = buf;
            n++;
        }

    } while (buf != 0);

    /* 合計値を算出 */
    printf("--入力されたのは以下の数です--\n");
    for (sum = i = 0; i < n; i++) {
        printf("%d \t", array[i]);
        sum += array[i];
    }

    printf("合計は %d です\n", sum);

    free(array);
    return EXIT_SUCCESS;
}
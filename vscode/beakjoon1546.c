#include <stdio.h>
#include <stdlib.h>

int main() {
    int index, M = -99999, s = 0;
    scanf("%d", &index);
    int* score = (int*)malloc(sizeof(int) * index);
    for (int i = 0; i < index; i++) {
        scanf("%d", &score[i]);
        s += score[i];
    }
    for (int i = 0; i < index - 1; i++) {
        if (score[i] < score[i + 1])     M = score[i + 1];
        else  M = score[i];
    }
    printf("%.2f", (((double)s / M) * 100)/index);
    free(score);
    return 0;
}
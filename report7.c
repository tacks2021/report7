#include <stdio.h>

/*
値の入れ替えを行う関数
*/
void swap (int *x, int *y) {
    int temp;    // 値を一時的に保存する変数
    temp = *x;
    *x = *y;
    *y = temp;
}

/* 
順序の入れ替えを行う関数 
*/
void bubble_sorts (int score[], int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j >= i + 1; j--) {
        if (score[j] > score[j-1]) {
            swap(&score[j], &score[j-1]);
            }
        }
    }
}

int main() {
    // 実行例1
    const int SIZE = 5;
    int scores[SIZE] = {0, 60, 70, 100, 90};
    int i;
    
    printf("--実行例1--\n");
    printf("scores = ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
        }
    printf("\n");

    bubble_sorts(scores, SIZE);

    printf("results = ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", scores[i]);
        }
    printf("\n");
    
    //実行例2
    const int SIZE_2 = 6;
    int scores_2[SIZE_2] = {100, 60, 70, 100, 90, 80};

    int j;
    
    printf("--実行例2--\n");
    printf("scores = ");
    for (j = 0; j < SIZE_2; j++) {
        printf("%d ", scores_2[j]);
        }
    printf("\n");

    bubble_sorts(scores_2, SIZE_2);

    printf("results = ");
    for (j = 0; j < SIZE_2; j++) {
        printf("%d ", scores_2[j]);
        }
    printf("\n");

    return 0;

}
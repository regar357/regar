#include <stdio.h>
#include <stdlib.h>

int main(){
    int C, j=0;
    scanf("%d", &C);
    while(j != C){
        int N, sum=0, c=0;
        double avg, p;
        scanf("%d", &N);
        int* score = (int*)malloc(sizeof(int)*N);
        for(int i = 0; i < N; i++){
            scanf("%d", &score[i]);
            sum += score[i];
        }
        avg = (double)sum/N;
        for(int i = 0; i < N; i++){
            if(score[i]>avg)  c++;
        }
        p = (double)c/N*100;
        printf("%.3f%%\n", p);
        free(score);
        j++;
    }
    return 0;
}
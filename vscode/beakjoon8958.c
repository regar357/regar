#include <stdio.h>
#include <string.h>

int main(){
    char array[80];
    int n, i, j=0, score, sum;
    scanf("%d", &n);
    while(j != n){
        sum = 0;
        score = 0;
        scanf("%s", array);
        for(i = 0; i < strlen(array); i++){
            if(array[i] == 'O')   sum += ++score;
            else                  score = 0;
        }
        printf("%d\n", sum);
        j++;
    }
    return 0;
}
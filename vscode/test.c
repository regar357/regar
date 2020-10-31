#include <stdio.h>

int main(){
    int n,min,max;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        scanf("%d", arr);
    }
    max = arr[0]; min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("%d %d", min, max);
    free(arr);
    return 0;
}
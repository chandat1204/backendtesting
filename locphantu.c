#include <stdio.h>
void arrays(int array[], int size, int sum){
    printf("Các cập số có tổng bằng %d:\n", sum);
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(array[i] + array[j] == sum){
                printf("[%d,%d] ", array[i], array[j]);
            }
        }
    }
}
int main(){
    int array[] = {3,5,7,6,1,0,4,2};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 7;
    arrays(array, size, sum);
    return 0;
}
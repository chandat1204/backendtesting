#include <iostream>
#include <cstring>
using namespace std;

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

void results(int array[], int length){
    for(int i = 0; i < length; i++) cout << array[i] <<' ';
    cout << endl;
}
size_t array_unique(int* array, size_t size){
    for(size_t i = 0; i < size - 1; ++i){
        for(size_t j = i + 1; j < size; ++j){
            if(array[i] == array[j]){
                memmove(&array[j], &array[j + 1], sizeof(int) * (size - j - 1));
                --size;
                --j;
            }
        }
    }
    return size;
}
int main(){
    int array[] = {1,2,1,3,4,3,7,5,5,6};
    size_t size = array_unique(array, SIZE_OF_ARRAY(array));
    results(array, size);
    return 0;
}
#include <stdio.h>
void shiftAndInsert(int arr[],int size,int number){
    int pos;
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] == 0){
            pos = i;
            break;
        }
        if(number > arr[i]){
            continue;
        }
        else{
            pos = i;
            break;
        }
    }
    for(i = size -1; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = number;
}
void printArray(int arr[],int size){
    int i;
    printf("Current list = ");
    for(i = 0; i < size; i++){
        if (arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int existsInArray(int arr[],int size,int target){
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] == target){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size = 10;
    int arr[size];
    int i;
    for(i = 0; i < size; i++){
        arr[i] = 0;
    }
    i = 0;
    while(i < size){
        printf("Enter the %d. number: ",i + 1);
        int number;
        scanf("%d",&number);
        if (number <= 0) {
            printf("ERROR: %d is not POSITIVE\n",number);
        }
        else if(existsInArray(arr,size,number) == 0){
            shiftAndInsert(arr,size,number);
            printArray(arr,size); 
            i++;      
        } 
        else {
            printf("ERROR: %d is already in the list\n",number);
        }
    }
    printf("!!! THE END !!!");
    return 0;
}

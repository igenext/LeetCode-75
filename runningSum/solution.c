#include<stdio.h>
#include<stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
    int n;
    *returnSize = numsSize;
    for(n=1;n<numsSize;n++) *(nums+n) += *(nums+n-1);
    return nums;
}

int main(){
    
    int arr[] = {1,2,3,4},size = sizeof(arr)/sizeof(arr[0]);
    int *ptr = malloc(sizeof(int));
    int *re=runningSum(arr,size,ptr);
    for(int i=0;i<size;i++){
        printf("%d ",*(re+i));
    }
    printf("\n");
    return 0;
}
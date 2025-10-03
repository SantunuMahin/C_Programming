// Binary Search in string
#include<stdio.h>
#include<string.h>
int main(){
    char *arr[] = {"Kaysar","Mahin", "Santunu",};
    char *name = "Santunu";
    int len = sizeof(arr) / sizeof(arr[0]);
    int left =0;
    int found =0;
    int right = len-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        int cmp = strcmp(arr[mid], name);
        if(cmp == 0){
            printf("Found: %s index %d /n", arr[mid],mid);
            found =1;
            break;
        }
        else if(cmp < 0){
            left = mid +1;
        }
        else {
            right = mid -1;
        }
    }
    if(!found){
        printf("Not Found /n");
    }
    return 0;
}
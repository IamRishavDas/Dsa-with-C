#include<stdio.h>

int main(){
    // array syntax: define
    // data_type name[size];  -- one dimensional array
    // int arr[5]; // 5 elements

    // n bit number
    // range = 2^(n-1) -1 to 2^(n-1)

    // insert in the array
    // arr[0] = 10;
    // arr[1] = 11;

    // input using loop
    // for(int i=0; i<5; i++){
    //     int n;
    //     printf("Enter the array %dth element: ", i);
    //     scanf("%d", &n);
    //     arr[i] = n;
    // }
    
    // print
    // for(int i=0; i<5; i++){
    //     printf("The %dth element is: %d\n", i, arr[i]);
    // }

    //sorting an array in ascending
    // int arr1[4] = {1, 2, 5, 0};
    // {0, 1, 2, 5} ascending

    //  bubble sort

    // no of pass = no of element - 1;
    // iteration in i-th pass =  n - (i-1) = n - i + 1;
    // no of elements in volved in i-th pass = n - i + 1;

    // time complexity  = O(n^2)
    // space complexity = O(1), constant space complexity

    // first pass, 1 = 5(n-0)
            // -2 45 0 11 -9
            // -2 45 0 11 -9
            // -2 0 45 11 -9
            // -2 0 11 45 -9
            // -2 0 11 -9 45
    //2nd pass, 2 = 4(n-1)
            // -2 0 11 -9 45
            // -2 0 11 -9 45
            // -2 0 11 -9 45
            // -2 0 -9 11 45
    //3rd pass, 3 = 3(n-2)
            // -2 0 -9 11 45
            // -2 0 -9 11 45
            // -2 -9 0 11 45
    //4th pass, 4 = 1(n-3)
            // -2 -9 0 11 45
            // -9 -2 0 11 45

    
    // bubble sort implementation
    int size = 5;
    int sortArray[5] = {-2, 45, 0, 11, -9};
            // -2 45 0 11 -9 // j = i + 1
            //  i
            //  j
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1; j++){
            if(sortArray[j] > sortArray[j+1]){
                int temp = sortArray[j]; // temp = -2
                sortArray[j] = sortArray[j+1]; //  45 45 0 11 -9
                sortArray[j+1] = temp;//  45 -2 0 11 -9
            }
        }
    }

    // print
    for(int i=0; i<size; i++){
        printf("The %dth element is: %d\n", i, sortArray[i]);
    }

}
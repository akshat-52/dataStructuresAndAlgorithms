/*
Bubble Sort Algorithm ->

bubbleSort(array)
    for i <- 1 to indexOfLastElement-1
        if leftElement > rightElement
            swap leftElement and rightElement
end bubbleSort
*/

// bubbleSortAlgo Code
#include <stdio.h>

//perform the bubble sort
void bubbleSort(int array[], int size){

    //loop to access each array element
    for(int step=0; step<size-1; ++step){

        //loop to compare array elements
        for(int i=0; i<size-step-1; ++i){

            //compare two adjacent elements
            //change > to < to sort in descending order
            if(array[i] > array[i+1]){

                //swapping occurs if elements are not in intended order
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
    }
}
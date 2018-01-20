#include <stdio.h>
#include <stdlib.h>

/* Insertion sort algorithm*/ 

void insertionSort(int array[], int arraySize);

int main()
{
  
    int numEntries = 0;

    scanf("%d", &numEntries); 

    int * myArray = NULL;

    myArray = new int[numEntries];

   

    for (int i = 0; i < numEntries; i++)
    {
        int number = 0;
        scanf("%d", &number);

        *(myArray + i) = number;

    }

    insertionSort(myArray, numEntries);

    printf("\n");

    for (int i = 0; i < numEntries; i++)
    {
        printf("%d\n", *(myArray + i));

    }


   return 0;
};



void insertionSort(int array[], int arraySize)
{
    int temp = 0;
    int i = 0;
    int j = 0;


    for (i = 0; i < arraySize; i++)
    {
        j = i;

        while (j > 0 && (array[j] < array[j-1]))
        {
            temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;

            j--;
        }
    }

}





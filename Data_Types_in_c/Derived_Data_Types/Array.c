#include <stdio.h>   //input/output file

int main() {      //entry point function
    // Declaration and Initialization of an integer array
    int my_array[] = {10, 20, 30, 40, 50};
    
    // Calculate the number of elements in the array
    int size = sizeof(my_array) / sizeof(my_array[0]); 

    printf("Elements in the array are:\n");  //printf msg on terminal

    // Loop through the array and print each element
    for (int i = 0; i < size; i++) {
        // Accessing elements using index
        printf("Element %d: %d\n", i, my_array[i]);
    }

    return 0;  //return responce-sucessful return
}


/*Output*/
ppp@ppp-Inspiron-15-3567:~/c-lang-prog$ cd "/home/ppp/c-lang-prog/c-programmig/Data_Types_in_c/Derived_Data_Types/" && gcc Array.c -o Array && "/home/ppp/c-lang-prog/c-programmig/Data_Types_in_c/Derived_Data_Types/"Array
Elements in the array are:
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
Element 4: 50

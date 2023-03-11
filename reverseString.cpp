//This program reverses a given string

#include <iostream>

int main(int argc, char **argv)


{
    char strings[]="abcd";
    //if the size of the rStrings is not defined, it will lead to undefined behaviour
    size_t s = sizeof(strings);
    char rStrings[s]="";

    printf("Original Array: \n");
    //printing the contents of the original array
    for (int i=0; i<((sizeof(strings)/sizeof(strings[0]))-1);i++)

    {
        printf("%c \n", strings[i]);
    }

    // getting the number of elements is straightforward, divide the size of the whole array 
    // by the size of the first element
    uint8_t numberOfElements =(sizeof(strings)/sizeof(strings[0]));
    // the number of elements have to deducted by two, because the last element is the null terminator
    // also because the index starts at 0 and the last element (not counting the null terminator) will
    // always be one less than the total number of elements
    numberOfElements=numberOfElements-2;

    for (int i=0; i<((sizeof(strings)/sizeof(strings[0]))-1);i++)

    {   
        rStrings[i] = strings[numberOfElements-i];
    }
        printf("Reversed Array: \n");
    for (int i=0; i<5;i++)

    {
         printf("%c \n",rStrings[i]);

    }

    return 0;

    // 0-> 3 5-2-0
    // 1-> 2 5-2-1
    // 2-> 1 5-2-2
    // 3-> 0 5-2-3






}

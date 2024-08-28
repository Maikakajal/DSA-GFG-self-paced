//problem Statement
/*Insertion is a basic but frequently used operation. Arrays in most languages can not be dynamically shrinked or expanded. Here, we will work with such arrays and try to insert an element at the end of the array.

You need to modify the given array arr. The size of the array is given by sizeOfArray. You need to insert an element at the end. Array already have the sizeofarray -1 elements.*/

void insertAtEnd(int arr[],int sizeOfArray,int element)
{
    //Your code here
    arr[sizeOfArray - 1] = element;
}

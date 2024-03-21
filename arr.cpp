#include <iostream>
using namespace std;

//start from end index (size-1) come to pos shift elements towards end and insert element at pos
void insertElement(int arr[], int size, int pos, int element)
{
    for (int i = size - 1; i >= pos; --i)
        arr[i + 1] = arr[i];

    arr[pos] = element;
}


//
int deleteElement(int arr[],int size,int pos,int element){
    
    for (int i=pos;i<size-1;i++)
        arr[i]=arr[i+1];

    size=size-1;
        
        return size;
}

void displayArray(int arr[],int size){
        for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

        cout<<endl;

}

int main()
{
    int arr[10] = {1, 2, 4, 5};
    int size = 4;
    int element, position;
    
    displayArray(arr,size);

    // cout << "Enter element to be inserted: "<<endl;
    // cin >> element;

    // cout << "Enter position at which the element is to be inserted: "<<endl;
    // cin >> position;

    // insertElement(arr, size, position, element);
    // size++;

}
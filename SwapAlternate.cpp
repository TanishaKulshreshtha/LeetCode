//Array -- Swapping alternate elements 

#include <iostream>
using namespace std;

void swap_alternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<size;i++){
        cout << arr[i]<<" ";
    }
};

int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    swap_alternate(arr,size);
    return 0;
}
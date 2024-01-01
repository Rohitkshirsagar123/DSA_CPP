#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }

    int pivot= partition(arr,start,end);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,end);
}

int main(){
    cout<<"Quick sort ascending order"<<endl;
    int arr[]={6,3,5,2,2,8,1,3,2,9};
    quicksort(arr,0,9);

     for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }
}
#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    //original array
    cout<<"my original array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //reversed original array is
    cout<<" my reversed array is: ";
    int s=0; int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sum of all the array elements
    cout<<"sum of all the array elements is : ";
    int sum=0;
     for(int i=0;i<size;i++){
         sum=sum+arr[i];
     }
     cout<<sum<<endl;
     
      //product of all the array elements
    cout<<"product of all the array elements is : ";
    int product=1;
     for(int i=0;i<size;i++){
         product=product*arr[i];
     }
     cout<<product<<endl;
     //find max and min in the given array
     cout<<" max and min in the given array is........ "<<endl;
     int small=INT8_MAX;
     int large=INT16_MIN;
     for(int i=0;i<size;i++){
         small=min(arr[i],small);
         large=max(arr[i],large);
     }
     cout<<"largest element is in the array is :" <<large<<endl;
     cout<<"smallest element is in the array is :" <<small<<endl;
    return 0;
}
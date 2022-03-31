#include<iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e = mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}
int main()
{
    int arr [5] ={17,20,1,2,3};
    int get_pivot = getPivot(arr,3);
    cout<< "Pivot is: "<<arr[get_pivot]<<endl;
    cout<< "Index of pivot is: "<< ++get_pivot<<endl;
}

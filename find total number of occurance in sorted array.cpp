#include<bits/stdc++.h>
using namespace std;
int fastOcc(int arr[], int n, int key)
{
    int s=0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(key> arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s=0, e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if(key> arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    int even[5] = {1,2,4,4,5};
    int a = fastOcc(even,5,4) ;
    int b = lastOcc(even,5,4) ;

    int ans = (b-a) + 1;
    if(a==-1 && b==-1)
        cout<< 0 << endl;


    cout << ans <<endl;

}


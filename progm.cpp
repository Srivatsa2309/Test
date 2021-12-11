//--------------------------Find out length of an array-------------------------
#include<iostream>
using namespace std;
int main()
{
    int n, arr[] = {1,2,3,4,5,6,7};
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Value of n : "<<n;
    return 0;
}
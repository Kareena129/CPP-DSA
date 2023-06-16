#include<iostream>
using namespace std;

int firstOcc(int arr[] , int n, int key){

    int s = 0, e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
    }
        mid = s = (e - s)/2;
}
return ans;
}

int main(){

int even[5] = {1,2,3,3,5};

cout<< "first Occurence of 3 is at index" << firstOcc(even, 5,3) <<endl;

return 0;
}

// int start = 0;
// int end = size-1;

// int mid = (start+end)/2;

// while(start <= end) {

//     if(arr[mid] == key);{
//     return mid;
//     }

//     if(key > arr[mid]) {
//         start = mid +1;
//     }
//     else{
//         end = mid - 1;
//     }
//     mid = (start+end)/2;
// }
// return -1;
// }
// int main() {

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,14,16};

//     int index = binarysearch(even, 6, 20);

//     cout << "index  of 12 is " << index <<endl; 
// }


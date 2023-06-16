// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     char ch;
//     cin >> ch;

//     if (ch > 64 && ch < 91)
//     {
//         cout << "In upperCase";
//     }
//     else if(ch>96 && ch<123)
//     {
//         cout << "In lowerCase";
//     }
//     else if(ch>0 && ch<9){
//         cout<<"numbera";
//     }
//     else {
//         cout<<"special characters";
//     }
// }

// using namespace std;
// int main(){
// int n;
// cin>>n;
//   int sum=0;
//    int i=2;
//    while(i<=n){
//      sum=sum+i;
//     i=i+2;
//    }
//     cout<<"sum is"<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter";
//     cin>>n;
//     int i=1;
//     while(i<n){
//         if(n%i==0){
//             cout<<"not prime"<<"  ";
//         }
//         else{
//             cout<<"prime"<<" ";

//         }
//         i=i+1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//                     }
//                     cout<<endl;
//     i=i+1;}
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter n";
// cin>>n;
// int i=1;
// int count=1;
// while(i<=n){
//     int j=1;

//     while(j<=n){
//         cout<<count;
//         count=count+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int i=1;int count=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count;
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     int i=1;int count=i;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<count;
//             count=count+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         int k = i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << k++ << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         int k=i;
//         for(int j=1;j<=i;j++){
//             cout<<k--<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         int k = 1;
//         for (int j = 1; j <= n; j++)
//         {
//             cout << ch  << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }
}
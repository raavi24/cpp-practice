// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cin >> n;
//     int  a=0;
//     int  b=1;
//     int c;
//     cout<<a<<endl;
//     cout<<b<<endl;

//     for(int i=1; i<=n-2; i++)
//     {
//          c=a+b;
//          a = b;
//          b = c;
//          cout<<c<<endl;
//      }

//     return 0;

// }

// #include <iostream>

// using namespace std;
// int main()
// {
//     int n;
//     cout<<"print n numbers: "<<endl;
//     cin>>n;
//     int sqaue;
//     int sum=0;

// for(int i=0; i<=n; i++)
// {
//     sqaue=i*i;
//     cout<<sqaue<<endl;
//     sum=sum+sqaue;
// }

//     cout<<"The sum is: "<<sum<<endl;

// return 0;
// }
// #include <iostream>
//     using namespace std;

//     int sum (int x, int y);
//     {
//         int c = x + y;
//         return c;
//     }

//     int main()
//     {
//         int a, b;

//         cout << "Print two numbers for addition: " << a << b << endl;

//         cin >> a >> b;

//         int add = sum (a,b);

//         cout <<add;

//         return 0;
//     // }

#include<iostream>
using namespace std;

int product(int prd1, int prd2)
{
   totalofproduct=prd1*prd2;
   return totalofproduct;
   
}

int main()
{
    int newprd1, newprd2;
    cout<<"number of product is: "<<newprd1<<newprd2<<endl;
    cin>>newprd1>>newprd2;

   int multiply=product(newprd1,newprd2);
   cout<<multiply;
   return 0;



    

}

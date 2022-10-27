#include<iostream>
using namespace std;
int main()
{
	
   int fib,first=0,second=1,third=0;
   cin>>fib;

   for(int i=0; i<fib; i++)
   {
       third=first+second;
       first=second;
       second=third;
   }
   cout<<first<<endl;
   
   return 0;
   
}

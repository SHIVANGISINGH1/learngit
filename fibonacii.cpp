#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >>n;
	 
    
     int first,second,third;
     first = 0;
     second = 1;
     cout<<first<<endl;

     while(second<=n)
     {
         
          // as third num in fibonaci series is sum of first two

             third = first+second;
             cout<<second<<endl;
             first = second;
             second = third;
             
        

     }  
	 return 0;
}

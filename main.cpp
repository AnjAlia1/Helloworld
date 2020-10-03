/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    if(a==0)
    {
        cout<<b;
    }
    if(b==0)
    {
        cout<<a;
    }
    for(i=min(a,b);i>=1;i--)
    {
        if((a%i==0) && (b%i==0))
        {
            cout<<i;
          break;
        }
    }
    return 0;
   
}

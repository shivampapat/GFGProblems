#include<iostream>
#include<math.h>
using namespace std;

int main()
{
      long t;
      cin>>t;

      
      while(t--)
      {
            int n;
            cin>>n;

            if(n==0)
            {
                  cout<<"NO\n";
                  continue;
            }
             if(!(n&(n-1)))
                  cout<<"YES\n";
            else      
                  cout<<"NO\n";    
            

      }
      
      return 0;
}
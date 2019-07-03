#include<iostream>
#include<math.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n,k;
            cin>>n>>k;

            if((1<<k) & n)
                  cout<<n<<"\n";
            else      
                  cout<<(n+(pow(2,k)))<<"\n";    
      }
      return 0;
}
#include<iostream>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;

            int mask = 3;

            for(int i=0;i<8;i+=2)
            {
                   int temp = (n&mask);
                  cout<<"temp:"<<temp<<"\t"; 
                  if(temp !=mask && temp>0)
                        n = n^mask; 

                  mask = mask<<2;     

                  cout<<"mask:"<<mask<<"\tn:"<<n<<"\n";      
            }
            cout<<n<<"\n";
      }

      return 0;

}
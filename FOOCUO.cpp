#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	        int x,y,d;
	        cin>>x>>y>>d;
	        int a = abs(x-y);
	        if(a<=d)
	        {
	                cout<<" Yes"<<endl;
	        }
	        else
	        {
	                cout<<" No"<<endl;
	        }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(x > y)
	    {
	        if(x - y <= z)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        if(y - x <= z)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int org=20;
	char ch1;
	cout<<"Enter a number=";
	cin>>a;
	if (!cin.fail())
	{
		for(int i=0 ; i<3 ; i++)
		{
			if(a==org)
		    {
			    cout<<"You win"<<endl;
			    break;
		    } 
	    	else
	    	{
		    	cout<<" You entered a wrong number"<<endl;
		    	cout<<" Please try again"<<endl;
		    	cout<<"Enter again a number=";
		    	cin>>a;
		    }
		}
	    if(a!=org)
	    {
	    	cout<<"you lose";
		}
	}
	else
    {
		cout << "Invalid Input";	
	}
	return 0;
}



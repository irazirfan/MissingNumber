#include <iostream>
using namespace std;

int main() {
	int arr[5]={1,2,3,5};
	int x = 1;
	for(int i=0; i<4; i++)
	{
	    if(arr[i] == x )
	    {
	        if(x == 6 && i == 3)
	        {
	            i = 0;
	        }
	        x += 1;
	        continue;
	    }
	    else if(arr[i] != x)
	   {
	       break;
	   }
	}
	
	cout << x << endl;
	return 0;
}

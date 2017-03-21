#include<iostream>
using namespace std;

int main(void)
{
	int n;
	cout << "Enter the n:" ;
	cin >> n ;

	while(n != 1)
	{
		if(n % 2 == 0)
		{
			n = n / 2 ;
		}
		else
		{
			n = 3 * n + 1 ;
		}
		cout << n << endl;
	}

return 0;
}

#include<iostream>
using namespace std;

int main()
{
	int x;
	int i = 2;
	cout << "Enter Number: ";
	cin >> x;
	cout << "Factoring Result:";
	LOOP:
		if (x % i == 0)
		{
			if(x/i!=1)
	        cout << " " << i << " x";
			if (x / i == 1)
			cout <<" "<< i;
		    x = x / i; 
			if (x == 1)
			{
				goto END;
			}
			goto LOOP;
		}
		else
		{
			i++;
			goto LOOP;
		}
	END:
	cout << endl;
	system("pause");
	return 0;
}
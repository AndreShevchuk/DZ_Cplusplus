#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    float y;
     cout<<"Enter x:";
    for(int i=0; i<5; i++){
    cin >>x;
    y=pow(sin(x),5)+abs(5*x-1.5);
    cout<<"Y="<<y<<endl;
    }
}
Завдання 2

#include <iostream>
using namespace std;
int factorial(int P)
{
	int S = 1;
	for(int i=1; i<=P; ++i)
	{
		S *= i;
	}
	return F;
}
int main()
{
	int P;
	cout << "P = ";
	cin >> P;	
	if(P >= 0)
	{
		cout << factorial(N); 
	}
	else
	{
		cout << "Error: P < 0.";
	}
	return 0;
  Завдання 3
#include <iostream>
using namespace std;

int main()
{
	cout << "exercise 3:\n";
	int a, b, h;
	int y = 0;

	cout << "Enter a:";
	cin >> a;

	cout << "Enter b:";
	cin >> b;

	cout << "Enter h:";
	cin >> h;

	for (int x = a; x <= b; x += h) {
		if (x + 5 != 0) {
			y = pow(5 * (x), 3) + sqrt(-x + 6);
			cout << "-----------------------:\n";
			cout << ":   X :        Y       :\n";
			cout << "-----------------------:\n";
			cout << ":   " << x << " : " << y << "      :\n";
			cout << "-----------------------:\n";
		}
		else {
			cout << "Invalid value for x";
		}
	}
	return 0;

}

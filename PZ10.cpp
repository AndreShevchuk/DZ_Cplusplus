Завдання 3
  #include <iostream> 
#include <ctime> 
#include <cstdlib> 
using namespace std;
int main() 
{   
srand( time(NULL));
const int size = 5; 
int array[size]; 
int i, min, max, min_index, max_index, temp; 
for ( i = 0; i < size; i++) 
array[i] = rand() % 100; 
cout << "Input array: " <<endl;
for ( i = 0; i < size; i++) 
cout << array[i] << " "; 
cout << endl; 
min = array[0];
max = array[0];
min_index = 0; 
max_index = 0;
for ( i = 1; i < size; i++)  
{
if(max < array[i]) 
{ 
max = array[i]; 
max_index = i; 
} 
if(min > array[i]) 
{ 
 min = array[i]; 
min_index = i; 
}  
}
temp = array[min_index]; 
array[min_index] = array[max_index]; 
array[max_index] = temp; 
cout << "Output array:"<<endl;
for ( i = 0; i < size; ++i) 
cout << array[i] << " "; 
cout <<endl;
}
Завдання 4 
  #include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {
    
    const int size = 12;
    int m[size] = {3,-4,9,69,12,85,9,7,13,-5,18,-7};
    
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
    
    int input;
    cout << "enter a number: ";
    cin >> input;

    for (int i = 0; i < size; i++)
    {
        if (m[i] > input)
        {
            cout << m[i] << " ";
        }
    } 
  Завдання 6
    #include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(void) {

    const int size = 12;
    int m[size] = { 1,66,6,27,5,-13,0,22,16,-4,11,4 };
    bool nul = false;

    for (int i = 0; i < 12; i++)
    {
        if (m[i] == 0)
        {
            cout << "zero is at number: " << i + 1 << endl;
            nul = true;
        }
    }

    if (!nul)
    {
        cout << "has no zeros" << endl;
    }
}
  

№6
#include <iostream>

using namespace std;

int main(void)
{
    bool answer;
    int value;

    cout << "Enter a value: ";
    cin >> value;
    if ((0 <= value && 10 > value)
        || (value * 2 <= 20 && value - 2 > -2)
        || (value - 1 < 1 && value / 2 < 10)
        || (value == 111)) {
    answer = true;
    }
    else
    answer = false;
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
    return 0;
}
  №7
  ---
 
 
 №8
  #include <iostream>

using namespace std;

int main(){

    int a;
    int b;
    int c;
    int d;

    cin >> a;
    cin >> b;

    c = a / a;
    d = a / b;

    if (c == d) {

        cout << "Results are equal (by 0.000001 epsilon)";
    }

    else {

        cout << "Results are not equal (by 0.000001 epsilon)";
    }
}

№9
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
      int a,b,c,d;
      cin>>a;
      cin>>b;
      cin>>c;
      cin>>d;
      if(a<1){
        cout<<"error";
        return 0;
      } else if(a>255){
        cout<<"error";  
        return 0;
      }
      if(b<1){
        cout<<"error";  
        return 0;
      } else if(b>255){
        cout<<"error"; 
        return 0;
      }
      if(c<1){
        cout<<"error"; 
        return 0;
      } else if(c>255){
        cout<<"error";  
        return 0;
      }
      if(d<1){
        cout<<"error";  
        return 0;
      } else if(d>255){
        cout<<"error";  
        return 0;
      }
      cout << a << "." << b << "." << c << "." <<d;
      return 0;
}

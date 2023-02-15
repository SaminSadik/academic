#include<iostream>
using namespace std;
class C
{
   public:
       int Largest()
       {
           int num1, num2, num3;
           cout << "Enter three numbers:\n";
           cin >> num1 >> num2 >> num3;
           if(num1>=num2 && num1>=num3) return num1;
           else if(num2>=num1 && num2>=num3) return num2;
           else return num3;
       }
};
int main()
{
    C o;
    cout << o.Largest() << " is the largest";
    return 0;
}

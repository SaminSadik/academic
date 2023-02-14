#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "~~~~~~~~~<< Simple  Calculator >>~~~~~~~~~\n";
    cout << "~{Input Format: number1 operator number2}~\n";
    cout << "~~~{Valid operators: + , - , * , / , %}~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~<>~~~~~~~~~~~~~~~~~~~~\n\n";
    
    double x, y; char c;
    cin >> x >> c >> y;

    if(c=='+') cout << "\nAnswer : " << fixed << setprecision(2) << x+y << endl;
    
    else if(c=='-') cout << "\nAnswer : " << fixed << setprecision(2) << x-y << endl;
    
    else if(c=='*') cout << "\nAnswer : " << fixed << setprecision(2) << x*y << endl;
    
    else if(c=='/') cout << "\nAnswer : " << fixed << setprecision(2) << x/y << endl;
    
    else if(c=='%')
    {
        int a = x, b = y;
        if(x-a != 0 || y-b != 0) cout << "\n(Fractional values are ignored)\n";
        cout << "\nAnswer : " << a % b << endl;
    }

    cout << "\n~~~~~~~~~~~~~~~~~~~~<>~~~~~~~~~~~~~~~~~~~~\n";

    return 0;
}

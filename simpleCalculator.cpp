#include <bits/stdc++.h>
using namespace std;

void calculate(double x, char c, double y)
{
    double ans;

    if(c=='+') ans = x + y;
    else if(c=='-') ans = x - y;
    else if(c=='*') ans = x * y;
    else if(c=='/') ans = x / y;
    else if(c=='%')
    {
        int a = x, b = y; ans = a % b;
        if(x-a != 0 || y-b != 0) cout << "\n(Fractional values are ignored)\n";
    }

    cout << "\nAnswer : " << fixed << setprecision(2) << ans << endl;
}

int main()
{
    cout << "~~~~~~~~~<< Simple  Calculator >>~~~~~~~~~\n";
    cout << "~{Input Format: number1 operator number2}~\n";
    cout << "~~~{Valid operators: + , - , * , / , %}~~~\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~<>~~~~~~~~~~~~~~~~~~~~\n\n";
    
    double x, y; char c;
    cin >> x >> c >> y;
    calculate(x, c, y);

    cout << "\n~~~~~~~~~~~~~~~~~~~~<>~~~~~~~~~~~~~~~~~~~~\n";

    return 0;
}

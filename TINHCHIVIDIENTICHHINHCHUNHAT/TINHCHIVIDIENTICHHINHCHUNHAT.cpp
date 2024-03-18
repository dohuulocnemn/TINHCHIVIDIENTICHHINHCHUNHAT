#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "Nhap chieu dai a:";
    cin >> a;
    cout << "Nhap chieu rong b:";
    cin >> b;
    float cv, dt;
    cv = (a + b) * 2;
    dt = a * b;
    cout << "Chu vi hinh chu nhat: " << cv << endl;
    cout << "Dien tich hinh chu nhat: " << dt << endl;
    return 0;
}

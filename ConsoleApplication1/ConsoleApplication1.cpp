#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double x, y;
    cout << "Введите x y:";
    cin >> x >> y;

    if (x * x + y * y < 100 && y > abs(x))
        cout << "ответ: Да";
    else if ((x * x + y * y == 100 && y >= abs(x)) ||
        (x * x + y * y <= 100 && y == abs(x)))
        cout << "ответ: На границе";
    else
        cout << "ответ: Нет";

    return 0;
}


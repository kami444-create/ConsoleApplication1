#include <iostream> // Ввод/вывод
#include <cmath> // abs()
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian"); // Русская локализация
    double x, y;// Координаты точки
    
    cout << "Введите x y:"; // Приглашение к вводу
    cin >> x >> y; // Считываем координаты

    if (x*x + y*y < 100 && y > abs(x)) // Внутри круга и выше y=|x|
        cout << "ответ: Да";
    else if ((x*x + y*y == 100 && y >= abs(x)) || // На окружности и выше y=|x|
             (x*x + y*y <= 100 && y == abs(x))) // Внутри круга на y=|x|
        cout << "ответ: На границе";
    else
        cout << "ответ: Нет"; // Вне области

    return 0;  // Завершение программы
}

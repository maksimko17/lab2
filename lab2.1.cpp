#include <iostream>
#include <cmath>
using namespace std;
// Функція для обчислення площі та периметра трикутника
void obchislyty_trikutnyk(double a, double b, double c, double* plosha, double* perymetr) {
    // Перевірка дійсності сторін трикутника
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Невірні дані: сторони трикутника повинні бути додатними числами!" << endl;
        return;
    }
    // Обчислення півпериметра
    double p = (a + b + c) / 2.0;
    // Обчислення площі
    *plosha = sqrt(p * (p - a) * (p - b) * (p - c));
    // Обчислення периметра
    *perymetr = a + b + c;
}
int main() {
    // Введення даних
    double a, b, c;
    cout << "Введіть довжини трьох сторін трикутника: ";
    cin >> a >> b >> c;
    // Змінні для зберігання результатів
    double plosha, perymetr;
    // Виклик функції
    obchislyty_trikutnyk(a, b, c, &plosha, &perymetr);
    // Виведення результатів
    cout << "Площа трикутника: " << plosha << endl;
    cout << "Периметр трикутника: " << perymetr << endl;
    return 0;
}
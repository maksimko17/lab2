#include <iostream>
#include <cmath>
using namespace std;
// Зовнішні змінні для зберігання результатів
double global_plosha;
double global_perymetr;
// Функція для обчислення площі та периметра трикутника
template <class T>
void obchislyty_trikutnyk(T &plosha, T &perymetr, T a, T b, T c) {
  // Перевірка дійсності сторін трикутника
  if (a <= 0 || b <= 0 || c <= 0) {
    cout << "Невірні дані: сторони трикутника повинні бути додатними числами!" << endl;
    return;
  }
  // Обчислення півпериметра
  T p = (a + b + c) / 2.0;
  // Обчислення площі
  plosha = sqrt(p * (p - a) * (p - b) * (p - c));
  // Обчислення периметра
  perymetr = a + b + c;
}
int main() {
  // Введення даних
  double a, b, c;
  cout << "Введіть довжини трьох сторін трикутника: ";
  cin >> a >> b >> c;
  // Змінні для зберігання результатів
  double global_plosha;
  double global_perymetr;
  // Виклик функції
  obchislyty_trikutnyk(global_plosha, global_perymetr, a, b, c);
  // Виведення результатів
  cout << "Площа трикутника: " << global_plosha << endl;
  cout << "Периметр трикутника: " << global_perymetr << endl;
  return 0;
}


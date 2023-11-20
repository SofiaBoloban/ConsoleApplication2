// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


//include <iostream>
//include <cmath>

int main() {
    double i;
    std::cout << "Введіть значення i: ";
    std::cin >> i;

    // Обчислення координат вершин трикутника
    double A_x = 0, A_y = 0;
    double B_x = i, B_y = i - 1;
    double C_x = -i, C_y = i + 1;

    // Обчислення довжин сторін трикутника
    double side_BC = sqrt((C_x - B_x) * (C_x - B_x) + (C_y - B_y) * (C_y - B_y));

    // Обчислення висоти трикутника з вершиною в точці A
    double height_A = 2 * (0.5 * abs(B_x * C_y - C_x * B_y)) / side_BC;

    // Обчислення довжин сторін трикутника
    double side_AB = sqrt((B_x - A_x) * (B_x - A_x) + (B_y - A_y) * (B_y - A_y));
    double side_AC = sqrt((C_x - A_x) * (C_x - A_x) + (C_y - A_y) * (C_y - A_y));

    // Обчислення бісектриси трикутника з вершиною в точці A
    double bisector_B = 2 * B_x * side_BC / (side_AB + side_BC);

    // Виведення результатів
    std::cout << "Висота трикутника: " << height_A << std::endl;
    std::cout << "Бісектриса трикутника: " << bisector_B << std::endl;

    return 0;
}
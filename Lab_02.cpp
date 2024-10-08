#include <iostream>
#include <cmath>//підключення бібліотеки математичних функцій

using namespace std;

int main()
{
    // Integer11. Дано тризначне число. Знайти суму і добуток його цифр.

    int a, sum, mult; // Declaration

    // Input
    cout << "\n________Task 11________" << endl << endl;
    cout << "your number: " ;
    cin >> a;

    //Calculation
    sum = a % 10 + a / 10 % 10 + a / 100;
    mult = (a % 10) * (a / 10 % 10) * (a / 100);

    //Output
    cout << "Sum = " << sum << endl;
    cout << "Multiple = " << mult << endl;

    //Integer29. Дано цілі додатні числа A, B, C. На прямокутнику розміру A × B
    //розміщено максимально можлива кількість квадратів зі стороною C
    //(без накладання). Знайти кількість квадратів, розміщених на
    //прямокутнику, а також площу незайнятої частини прямокутника.

    int A, B, C; //Declaration
    cout << "\n________Task 29________" << endl << endl;
    cout << "Введіть розміри прямокутника A: ";
    cin >> A;
    cout << "Введіть розміри прямокутника B: ";
    cin >> B;
    cout << "Введіть сторону квадрата C: ";
    cin >> C;
    
    // Calculations
    int numSquaresA = A / C; // кількість квадратів по осі A
    int numSquaresB = B / C; // кількість квадратів по осі B
    int totalSquares = numSquaresA * numSquaresB; // загальна кількість квадратів

    int occupiedArea = totalSquares * C * C; // площа зайнята квадратами
    int rectangleArea = A * B; // загальна площа прямокутника
    int unusedArea = rectangleArea - occupiedArea; // незайнята площа

    // Output
    cout << "Кількість розміщених квадратів: " << totalSquares << endl;
    cout << "Площа незайнятої частини прямокутника: " << unusedArea << endl;
    

    //Tab 3, Task 3

    //Input: value of x
    cout << "\n________Tab3, Task 3________" << endl << endl;
    double x;
    cout << "Enter value of x: ";
    cin >> x;

    //Constants
    const double pi = 3.14; //M_PI
    double sin_28_deg = sin(28 * pi / 180); // Convert 28° to radians

    //First term: (sin^2(x + π) * 2^(1 - x))
    double first_term = pow(sin(x + pi), 2) * pow(2, 1 - x);

    //Second term: 4 * tan(|x|) * sin(28°)
    double second_term = 4 * tan(fabs(x)) * sin_28_deg;

    //Third term: (1/3) * log2(|x|)
    double third_term = (1.0 / 3.0) * log2(fabs(x));

    //Final result: y
    double y = (first_term / second_term) + third_term;

    //Output
    cout << "y = " << y << endl;



    return 0;

}
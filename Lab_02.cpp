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


    //Tab 2, Task 29 Дано числа x, y, x1, y1, x2, y2. Перевірити істинність висловлювання: «Точка з
    //координатами (x, y) лежить усередині прямокутника, ліва верхня вершина
    //якого має координати (x1, y1), права нижня - (x2, y2), а сторони паралельні
    //координатним осях».

    cout << "\n________Tab2, Task 29________" << endl << endl;

    //Input

    cout << "Left top coordinates (x1, y1): ";
    double x, y, x1, y1, x2, y2;
    cout << "Right bottom coordinates (x2, y2): ";
    cin >> x1 >> y1;
    cout << "Point coordinates (x1, y1): ";
    cin >> x2 >> y2;
    cin >> x >> y;

    //Calculations

    bool res = x > x1 && x < x2 && y > y2 && y < y1;

    //Output

    cout << "A point with coordinates (x, y) lies inside a rectangle \n";
    cout << "the top left vertex (x1, y), the bottom right - (x2, y2),\n";
    cout << "and the sides are parallel to the coordinate axes : ";
    cout << boolalpha << res << endl;

    //Tab 3, Task 3

    //Input: value of x
    cout << "\n________Tab3, Task 3________" << endl << endl;

    double Y;
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
    Y = (first_term / second_term) + third_term;

    //Output
    cout << "y = " << y << endl;



    return 0;

}
// Homework.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
using namespace std;
const double PI = 3.14;


void Homework_1() {
    cout << "*********************************************\nHomework_1\n";
    
    cout << "Task_1\n";
    cout << "Alexander\n";

    cout << "Task_2\n";
    int a, b;
    cout << "Enter two int numbers\n";
    cin >> a >> b;
    cout << "a + b = " << a + b << "\n" <<
        "a - b = " << a - b << "\n" <<
        "a * b = " << a * b << "\n" <<
        "a / b = " << a / b << "\n";

    cout << "Task_3\n";
    double b1,c1;
    cout << "bx + c = 0. Enter b and c and I will find x\nb = ";
        cin >> b1;
        cout << "c = ";
        cin >> c1;
        cout << "x = " << -c1 / b1<<"\n";

    cout << "Task_4\n";
    double a2, b2, c2, D;
    cout << "ax^2 + bx + c = 0. Enter a, b, c and I will find solution\na = ";
    cin >> a2;
    cout << "b = ";
    cin >> b2;
    cout << "c = ";
    cin >> c2;
    D = b2 * b2 - 4 * a2 * c2;
    if (D > 0) {
        cout << "x1 = " << (-b2 + sqrt(D)) / (2 * a2) << "\n";
        cout << "x2 = " << (-b2 - sqrt(D)) / (2 * a2) << "\n";
    }
    else if (D == 0) {
        cout << "x = " << -b2 / (2 * a2)<<"\n";

    }
    else if (D < 0) {
        cout << "No solutions\n";
    }
    else {
        cout << "Impossible\n";
    }

    cout << "Task_5\n";
    bool window, lamp, day = false;
    cout << "Is lamp turned ON?\n1-Yes\n0-No\n";
    cin >> lamp;
    if (lamp) {
        cout << "There is light in the room\n";
    }
    else {
        cout << "Is window opened?\n1-Yes\n0-No\n";
        cin >> window;
        cout << "Is there day outside?\n1-Yes\n0-No\n";
        cin >> day;
        if (day and window) {
            cout << "There is light in the room\n";
        }
        else {
            cout << "There is no light in the room\n";
        }
    }

    cout << "*********************************************\n";
}
void Homework_2() {
    cout << "*********************************************\nHomework_2\n";


    cout << "Task_1\n";
    double R, r, l, h;
    cout << "Enter the biggest radius(R) = ";
    cin >> R;
    cout << "Enter the second radius(r) = ";
    cin >> r;
    cout << "Enter the truncated cone(l) = ";
    cin >> l;
    cout << "Enter the height(h) = ";
    cin >> h;
    cout << "V = " <<(PI * h*(R * R + R * r + r * r))/3<<"\n";
    cout << "S = " << PI * (R * R + (R + r) * l + r * r)<<"\n\n";

    cout << "Task_2\n";
    double a, x;
    cout << "Enter a ";
    cin >> a;
    cout << "Enter x ";
    cin >> x;
    if (abs(x) < 1) {
        cout << "W =" << a * log(abs(x)) << "\n\n";
    }
    else {
        cout << "W =" << sqrt(a-x*x) << "\n\n";
    }


    cout << "Task_3\n";
    double b, y;
    cout << "Enter b ";
    cin >> b;
    cout << "Enter y ";
    cin >> y;
    cout << "Enter x ";
    cin >> x;
    cout << "Z =" << log(b-y)*sqrt(b-x) << "\n\n";


    cout << "Task_4\n";
    int n;
    while (true) {
        cout << "Enter n ";
        cin >> n;
        if (n < 0) {
            cout << "Incorrect value. Try again \n";
        }
        else {
            break;
        }
    }
    
    for (int i = n ; i < n + 10; i++) {
        cout <<i<<" ";
        
    }
    cout << "\n\n";


    cout << "Task_5\n";
    x = -4;
    while (x != 4.5) {
        if (x == 1) {
            cout << "Cannot divide by zero\n";
        }
        else {
            cout << "If x = " << x << " Then y = " << (x * x - 2 * x + 2) / (x - 1) << "\n";
        }
        x = x + 0.5;
    }
    cout << "\n\n";

    cout << "*********************************************\n";
}


void Homework_3() {
    cout << "*********************************************\nHomework_2\n";

    cout << "Task_1\n";
    double s, p, n,r,m;
    cout << "Enter s ";
    cin >> s;
    cout << "Enter p ";
    cin >> p;
    cout << "Enter n ";
    cin >> n;
    r = p / 100;
    cout << "m = " << (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1))<<"\n\n";

    cout << "Task_2\n";
    s = 0; p = 0; n = 0; r = 0;
    double d = 9999999999999; double i_1;
    cout << "Enter s ";
    cin >> s;
    cout << "Enter m ";
    cin >> m;
    cout << "Enter n ";
    cin >> n;
    for (double i = 0; i < 1000; i = i + 0.001) {
        r = i / 100;
        if (abs(m - (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)))<d) {
            d = abs(m - (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1)));
            i_1 = i;
        }

    }
    cout<<"p = " << i_1<<"\n\n";

    cout << "Task_3\n";
    string line;
    ifstream in("C:\\Users\\IVC1-5\\Desktop\\Example.txt");
    if (in.is_open())
    {
        cout << "File is open\n";
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
    cout << "\n\n";

    /*
    cout << "Task_4\n";
    int op;
    ifstream in1("C:\\Users\\IVC1-5\\Desktop\\Example.txt");
    do {
        if (in1 >> op) {
            cout << op << " ";
        }
        else {
            in1.clear();
            in1.ignore(1, ' ');
        }
    } while (!in1.eof());
    in1.close();
    cout << "\n\n";
    */
    cout << "Task_4\n";
    ifstream in1("C:\\Users\\IVC1-5\\Desktop\\Example.txt");
    char ch;
    while (!in1.eof()) {
        in1 >> ch;
        if (ch >= '0' && ch <='9') {
            cout << ch;
        }
    }
    cout << "\n\n";

    cout << "Task_5\n";
    string line1;
    cin >> line1;
    char temp;
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 30 - i - 1; j++) {
            if (line1[j] > line1[j + 1]) {
                // меняем элементы местами
                temp = line1[j];
                line1[j] = line1[j + 1];
                line1[j + 1] = temp;
            }
        }
    }
        cout << line1<<"\n\n";
}


int fact(int x) {
    if (x == 1){
        return 1;
    }
    else {
        return x * fact(x - 1);
    }
   
}
void Test() {
    cout << "*********************************************\nHomework_2\n";

    cout << "Task_1\n";
    int V, T;
    cout << "Enter V ";
    cin >> V;
    cout << "Enter T ";
    cin >> T;
    cout << "S = " << V * T % 45<<"\n";

    cout << "Task_2\n";
    int x;
    cout << "Enter x = ";
    cin >> x;
    cout << "Answer is " << x / 100<<"\n";

    cout << "Task_3\n";
    int S, D;
    cout << "Enter D = ";
    cin >> D;
    cout << "Enter S = ";
    cin >> S;
    cout << "Answer is " << S / D << "\n";

    cout << "Task_4\n";
    int a;
    cout << "Enter x = ";
    cin >> x;
    a = x % 100;
    cout << "Answer is " << a/10 << "\n";

    cout << "Task_5\n";
    double x1, y1;
    cout << "Enter x = ";
    cin >> x1;
    cout << "Enter y = ";
    cin >> y1;
    if ((y1 <= x1 or y1 <= -x1) and (y1 >= x1 * x1 - 2)) {
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }

    cout << "Task_6\n";
    int num;
    while (true) {
        cout << "\nEnter a number ";
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num % 3 == 0) {
            cout<< num<<" is divided on 3\n";
        }
    }

    cout << "Task_7\n";
    int i =1, n = 5;
    cout << "Enter x ";
    cin >> x;
    while(x > n) {
        i++;
        n = n + 2;
    }
    cout << i << "\n";

    cout << "Task_8\n";
    while (true) {
        cout << "\nEnter a number ";
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num % 19 == 0) {
            cout << num << " is divided on 19\n";
        }
    }

    cout << "Task_9\n";
    cout << "Enter x ";
    cin >> x;
    cout << "Factorial of x is " << fact(x) << "\n";


    

    cout << "Task 11\n";
    int sum = 0;
    cout << "\nEnter array's length ";
    cin >> n;
    int *arr = new int[n];
    for (i = 0; i < n; i++) {
        cout << "Enter array's element ";
        cin >> arr[i];
        if (arr[i] % 7 == 0) {
            sum = sum + arr[i];
        }
    }cout << "sum = " << sum << "\n";


    cout << "Task 12\n";
    sum = 0;//В данной задаче max
    cout << "\nEnter array's length ";
    cin >> n;
    int *arr1 = new int[n];
    for (i = 0; i < n; i++) {
        cout << "Enter array's element ";
        cin >> arr1[i];
        if (arr1[i] % 3 == 0 and arr1[i]>sum) {
            sum = arr1[i];
        }
    }cout << "max = " << sum << "\n";

    /*
    cout << "Task 13\n";
    int sum = 0; int m;
    cout << "\nEnter array's length ";
    cin >> n, m;
    int** arr = new int*[n];
    for (int count = 0; count < n; count++) {
        arr[count] = new int[m];
    }
    */
    
    cout << "Task 14\n";
    string str;
    cout << "Enter string ";
    cin >> str;
    str.erase(remove(str.begin(), str.end(), '*'), str.end());
    cout << str<<"\n";
    
    cout << "*********************************************\n";
}


int main()
{
    bool isWorking;
    int check;//Доп. переменная, чтобы изабвится от ошибок при использовании ввода
    int number;//Номер домашки

    do {
        cout << "Do u want to start?\n1 - Yes\n0 - No\n";
        cin >> check;

        if (check == 1) {
            isWorking = 1;
            break;
        }

        else if (check == 0)
        {
            isWorking = 0;
            break;
        }

        else {
            cout << "ERROR!Try again.\n";
       }

    } while(true);

    while (isWorking) {
        cout << "Choose the homework ";
        cin >> number;
        switch (number) {
        case 1:
            Homework_1();
            break;
        case 2:
            Homework_2();
            break;
        case 3:
            Homework_3();
            break;
        case 10:
            Test();
            break;
        default:
            cout << "Homework does not exist. Try again\n";
            continue;
            break;
        }
        do {
            cout << "Do u want to continue?\n1 - Yes\n0 - No\n";
            cin >> check;

            if (check == 1) {
                break;
            }

            else if (check == 0)
            {
                isWorking = 0;
                cout << "Goodbye!";
                break;
            }

            else {
                cout << "ERROR!Try again.\n";
            }

        } while (true);

    }
    return 0; 
}





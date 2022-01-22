#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));
    /*Дана квадратная матрица порядка n (n строк, n столбцов). Найти наибольшее из значений элементов, расположенных в тёмно-синих частях матриц.*/

    const int size = 9;
    int arr[size][size];
    int max, N = size;
    char t, reset;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 80 + 10;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    do {

        max = arr[0][0];

        cout << "a)*****\t" << "b)*----\t" << "c)*****\t" << "d)-----\t" << "f)*****" << endl;
        cout << "  -****\t" << "  **---\t" << "  -***-\t" << "  -----\t" << "  -***-" << endl;
        cout << "  --***\t" << "  ***--\t" << "  --*--\t" << "  --*--\t" << "  --*--" << endl;
        cout << "  ---**\t" << "  ****-\t" << "  -----\t" << "  -***-\t" << "  -***-" << endl;
        cout << "  ----*\t" << "  *****\t" << "  -----\t" << "  *****\t" << "  *****" << endl;
        cout << endl;
        cout << "g)*---*\t" << "h)*----\t" << "i)----*\t" << "j)*****\t" << "k)----*" << endl;
        cout << "  **-**\t" << "  **---\t" << "  ---**\t" << "  ****-\t" << "  ---**" << endl;
        cout << "  *****\t" << "  ***--\t" << "  --***\t" << "  ***--\t" << "  --***" << endl;
        cout << "  **-**\t" << "  **---\t" << "  ---**\t" << "  **---\t" << "  -****" << endl;
        cout << "  *---*\t" << "  *----\t" << "  ----*\t" << "  *----\t" << "  *****" << endl;
        cout << endl;
        cout << "Выберите рисунок: ";
        cin >> t;



        switch (t) {
        case 'a':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i < j || i == j) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i > j || i == j) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i < j || i == j) && (N - 1 == i + j || i + j < N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;

        case 'd':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i > j || i == j) && (N - 1 == i + j || i + j > N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'f':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i > j || i == j) && (N - 1 == i + j || i + j > N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else if ((i < j || i == j) && (N - 1 == i + j || i + j < N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'g':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i > j || i == j) && (N - 1 == i + j || i + j < N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else if ((i < j || i == j) && (N - 1 == i + j || i + j > N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;

        case 'h':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i > j || i == j) && (N - 1 == i + j || i + j < N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'i':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i < j || i == j) && (N - 1 == i + j || i + j > N - 1)) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'j':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (N - 1 == i + j || i + j < N - 1) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        case 'k':
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (N - 1 == i + j || i + j > N - 1) {
                        cout << arr[i][j] << " ";
                        if (max < arr[i][j]) {
                            max = arr[i][j];
                        }
                    }
                    else {
                        cout << "**" << " ";
                    }
                }
                cout << endl;
            }
            break;
        }

        cout << endl << max << endl;
        cout << "Для еще одного круга нажми 'y': ";
        cin >> reset;

    }while (reset == 'y');
}

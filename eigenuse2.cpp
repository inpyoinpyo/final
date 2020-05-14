#include <iostream>
#include <Eigen/Dense>
#include <stdio.h>

using namespace Eigen;
using namespace std;
using Eigen::MatrixXd;

int main()
{
    int row1, column1;
    int row2, column2;
    int i, j;
    cout << "Enter matrix1 size: ";
    cin >> row1;
    cin >> column1;
    cout << "Enter matrix2 size: ";
    cin >> row2;
    cin >> column2;
    
    if(column1 != row2)
    {
        cout << "Error: Column of matrix1 must same row of matrix2 for multiplication." << endl;
        return 0;
    }
    MatrixXd x1(row1, column1);
    MatrixXd x2(row2, column2);
    for(i = 0; i < row1; i++)
        for(j = 0; j < column1; j++)
        {
            printf("enter Martrix1(%d, %d): ", i + 1, j + 1);
            cin >> x1(i, j);
        }
    cout << endl;
    for(i = 0; i < row2; i++)
        for(j = 0; j< column2; j++)
        {
            printf("enter Martrix2(%d, %d): ", i + 1, j + 1);
            cin >> x2(i, j);
        }
    cout << "x1 = " << endl << x1 << endl;
    cout << "x2 = " << endl << x2 << endl;
    cout << "x1 * x2 = " << endl << x1 * x2 << endl;
}
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
    char answer;
    while(1)
    {  
        cout << "Enter matrix1 size: ";
        cin >> row1;
        cin >> column1;
        cout << "Enter matrix2 size: ";
        cin >> row2;
        cin >> column2;
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
        cout << endl;
        cout << "x1 = " << endl << x1 << endl;
        cout << "x2 = " << endl << x2 << endl;
        //add, substract        
        if((column1==column2) && (row1==row2))
        {
            cout << "x1 + x2 = " << endl << x1 + x2 << endl;
            cout << "x1 - x2 = " << endl << x1 - x2 << endl;
        }else
            cout << "Error: size of matrix must same for add or substract." << endl;
        //multiply
        if(column1 == row2)
            cout << "x1 * x2 = " << endl << x1 * x2 << endl;
        else
            cout << "Error: Column of matrix1 must same row of matrix2 for multiplication." << endl;
        // more information?
        cout << "Do you want more information?(Y/N)";
        cin >> answer;
        if((answer == 'Y') || (answer == 'y'))
        {
            cout << "transpose of x1 = " << endl << x1.transpose() << endl;
            cout << "transpose of x2 = " << endl << x2.transpose() << endl;

            if(column1 == row1)
                cout << "determinent of x1 = " << endl << x1.determinant() << endl;
            else
                cout << "Error: x1 should be square matrix to get determination." << endl;
            if(column2 == row2)
                cout << "determinent of x2 = " << endl << x2.determinant() << endl;
            else
                cout << "Error: x2 should be square matrix to get determination." << endl;
            

            if(column1 == row1)
                cout << "inverse matrix of x1 = " << endl << x1.inverse() << endl;
            else
                cout << "Error: x1 should be square matrix to get inverse matrix." << endl;
            if(column2 == row2)
                cout << "inverse matrix of x = " << endl << x2.inverse() << endl;
            else
                cout << "Error: x2 should be square matrix to get inverse matrix." << endl;
        }
    cout << "Do you want to quit?(Y/N)";
    cin >> answer;
    if((answer == 'Y') || (answer == 'y'))
        return 0;
    }

}
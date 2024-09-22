//
//  main.cpp
//  2D_Array
//
//  Created by Oleh Mikula on 22.09.2024.
//

#include <iostream>

using namespace std;

int** createArray (int column, int row)
{
    int** array = new int*[row];
    for (int i = 0; i < row; ++i)
    {
        array[i] = new int[column];
    }
    return array;
}

void deleteArray(int** array, int row) {
    for (int i = 0; i < row; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

void fillArray(int** array, int column, int row)
{
    cout << "Fill the array" << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            cout << "Enter the number with ID: " << i << " " << j << ":  ";
            cin >> array[i][j];
            cout << endl;
        }
    }
}

void outputArray(int** array, int column, int row)
{
    for (int i = 0; i < row; ++i)
    {
        for(int j = 0; j < column; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void changeValue(int** array)
{
    int column{}, row{}, value{};
    cout << "Enter the ID of value that need to chaneg: ";
    cin >> column >> row;
    cout << endl <<"Enter the value: ";
    cin >> value;
    array[column][row] = value;
}




int main()
{
    char selection{};
    int column{}, row{};
    int** array = nullptr;
    
    do
    {
        cout << "1. Create new 2D Array" << endl;
        cout << "2. Fill the array" << endl;
        cout << "3. Change exist value in the array" << endl;
        cout << "4. Output array" << endl;
        cout << "Q. Quit" << endl;
        cout << "Your selection: ";
        cin >> selection;
        
        if (selection == '1')
        {
            if (array != nullptr)
            {
                deleteArray(array, row);
            }else{
                cout << "Enter count of column and row by space: ";
                cin >> column >> row;
                array = createArray(column, row);
            }
            
           
        }else if (selection == '2')
        {
            if (column == 0 && row == 0) {
                cout << "Please create the array" << endl;
            }
            fillArray(array, column, row);
            
        }else if (selection == '3')
        {
            changeValue(array);
            
        }else if (selection == '4')
        {
            outputArray(array, column, row);
        }
        
    } while (selection != 'q' && selection != 'Q');
    
    deleteArray(array, column);
    
    return 0;
}

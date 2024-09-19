//
//  main.cpp
//  education
//
//  Created by Oleh Mikula on 19.09.2024.
//

#include <iostream>
#include <vector>

using namespace std;

void addNewElements(vector <int>& numbers, int count){
    int temp{};
    cout << "Enter the " << count << " numbers" << endl;
    for(int i = 0; i < count; ++i){
        cin >> temp;
        numbers.push_back(temp);
    }
}


void removeElement(vector<int>& numbers, int element) {
    if (element < 0 || element >= numbers.size()) {
        cout << "Incorect number: "<< element << endl;
        return;
    }
    
    numbers.erase(numbers.begin() + element);

    cout << "Vector after deleting: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}



int main() {
    vector <int> numbers {};
    int countElement{};
    int removeNumber{};
    cout << "Enter the count of element of Vector: ";
    cin >> countElement;
    addNewElements(numbers, countElement);
    
    cout << "Enter the element that need to remove: ";
    cin >> removeNumber;
    
    removeElement(numbers, removeNumber);

//
//    vector <vector<int>> movie_ratings
//    {
//        {1, 2, 3, 4},
//        {1, 2, 4, 4},
//        {1, 3, 4, 5}
//    };

    return 0;
}


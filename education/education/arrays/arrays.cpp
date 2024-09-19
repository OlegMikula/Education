//
//  arrays.cpp
//  education
//
//  Created by Oleh Mikula on 19.09.2024.
//

#include <iostream>

void findMin(int array[], int x){
    int min = array[0];
    for(int i = 1; i < x; ++i){
        if(min > array[i]){
            min = array[i];
        }
    }
    
    std::cout << "Minimal Number" << min << std::endl;
}

void findMax(int array[], int x){
    int max = array[0];
    for(int i = 1; i < x; ++i){
        if(max < array[i]){
            max = array[i];
        }
    }
    std::cout << "Maximum Number: " << max << std::endl;
}

void findEvenOddNumbers(int array[], int x){
    int countEven = 0;
    int countOdd = 0;
    for(int i = 0; i < x; ++i){
        if(array[i] % 2 == 0){
            ++countEven;
        }else{
            ++countOdd;
        }
    }
    std::cout << "Count of even numbers: " << countEven << std::endl;
    std::cout << "Count of odd numbers: " << countOdd << std::endl;
}

//int main(){
//    int sizeArr;
//    std::cout << "Enter the size of arr: ";
//    std::cin >> sizeArr;
//    
//    int array[sizeArr];
//
//    std::cout << "Fill the Array by entering" << sizeArr << "numbers";
//    
//    for(int i = 0; i < sizeArr; ++i){
//        std::cin >> array[i];
//    }
//    
//    findMin(array, sizeArr);
//    findMax(array, sizeArr);
//    findEvenOddNumbers(array, sizeArr);
//    
//    return 0;
//}



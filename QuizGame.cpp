#include <iostream>
#include <string>

int searchArray(std::string array[], int size, std::string element);

int main(){

    std::string numbers[] = {"Pizza", "Hamburgers", "Hotdog"};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    std::string myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::getline(std::cin, myNum);

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array";
    }

    return 0;

}
int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1;
}
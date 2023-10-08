#include <iostream>

int calc(int* arr, int size, int input)
{
    int point_permanent = (size) / 2;
    int point_break = 0;
    int point_array_higth = size;
    int point_array_low = 0;

    for (int i = 1; i < size; i++) {

        if(point_permanent == point_break) break;
        point_break = point_permanent;

        if(arr[point_permanent] <= input){
            point_array_low = point_permanent;
            point_permanent += (point_array_higth - point_array_low) / 2;

        } else if(arr[point_permanent] >= input) {//4
                point_array_higth = point_permanent;
                point_permanent /= 2;

        }
    }

        return size - point_array_higth;

}

int main() {
    int arr[] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    int input;
    std::cout << "Введите точку отсчёта: ";
    std::cin >> input;
    std::cout << "Количество элементов в массиве больших, чем " << input << ": " <<
    calc(arr,9,input) <<  std::endl;
    return 0;
}

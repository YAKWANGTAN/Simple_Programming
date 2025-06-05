#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

double getAverage(int arr[], int size) {
    int sum = getSum(arr, size);
    return static_cast<double>(sum) / size;
}


int main() {
    int number[5];

    std::cout << "5개의 숫자를 입력하세요: ";
    for (int i = 0;i < 5; ++i) {
        std::cin >> numbers[i];
    }

    int sum = getSum(numbers, SIZE);
    double Average = getAverage(numbers, SIZE);

    cout << "합계: " << sum << endl
    cout << "평균: " <<Average << endl

    return 0;
}

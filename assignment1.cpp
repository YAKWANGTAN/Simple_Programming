필수 기능 가이드

1. 사용자로부터 5개의 숫자를 입력 받기
cout << 숫자 5개;
for(int i = 0; i < SIZE; i++){
    cin >> arr[i];
}

2.입력 받는 숫자를 배열에 저장?

3.배열에 저장된 숫자들의 합계와 평균을 계산
- 합계와 평균 계산
int sum = getSum(arr, SIZE);
double avg = getAverage(arr, SIZE);

4.계산된 합계와 평균을 출력
- 합계와 평균 출력
cout << "합계: " << sum << endl;
cout << "평균: " << avg << endl;

5.배열을 인자로 넘겨 받아서 배열 원소들의 합계를 반환하는 함수를 구현
int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

6.배열을 인자로 넘겨 받아서 배열 원소들의 평균을 반환하는 함수를 구현
double getAverage(int arr[], int size) {
    return static_cast<double>(getSum(arr, size)) / size;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];
}

7.위에서 만든 합계 함수와 평균 함수를 호출하여 합계와 평균을 출력
return 0; 으로 재출력?


도전 기능 가이드

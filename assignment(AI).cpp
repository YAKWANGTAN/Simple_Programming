필수 기능 가이드

1. 사용자로부터 5개의 숫자를 입력 받기
cout << 숫자 5개;
for(int i = 0; i < SIZE; i++){
    cin >> arr[i];
}

2. 입력 받는 숫자를 배열에 저장?

3. 배열에 저장된 숫자들의 합계와 평균을 계산
- 합계와 평균 계산
int sum = getSum(arr, SIZE);
double avg = getAverage(arr, SIZE);

4. 계산된 합계와 평균을 출력
- 합계와 평균 출력
cout << "합계: " << sum << endl;
cout << "평균: " << avg << endl;

5. 배열을 인자로 넘겨 받아서 배열 원소들의 합계를 반환하는 함수를 구현
int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

6. 배열을 인자로 넘겨 받아서 배열 원소들의 평균을 반환하는 함수를 구현
double getAverage(int arr[], int size) {
    return static_cast<double>(getSum(arr, size)) / size;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];
}

7. 위에서 만든 합계 함수와 평균 함수를 호출하여 합계와 평균을 출력
return 0; 으로 재출력?


도전 기능 가이드

1. 정렬은 오름차순 정렬과 내림차순 정렬이 가능하게 구현
오름차순 정렬 함수 
void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
내림차순 정렬 함수  
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

2. 숫자 1을 입력 받으면 오름차순 정렬, 숫자 2를 입력 받으면 내림차순으로 정렬하도록 구현
cout << "정렬 방식 선택 (1: 오름차순, 2: 내림차순): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        sortAscending(arr, SIZE);
        cout << "오름차순 정렬 결과: ";
    } else if (choice == 2) {
        sortDescending(arr, SIZE);
        cout << "내림차순 정렬 결과: ";
    } else {
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }


3. algorithm 헤더의 sort 함수를 사용하지 않고 직접 구현 ?
sort함수는 배열의 원소들을 정렬할 때 사용하며 기본적으로 오름차순으로 정렬한다.
sort함수를 사용하기 위해서는 algorithm헤더파일을 include시켜줘야 한다.


4. 오름차순 정렬과 내림차순 정렬 동작을 각각 함수로 구현 ?

결과 출력
 for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

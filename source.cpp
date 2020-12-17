
// Project name: Bubble Sort
// Author: Jan Kuczaj       
// Date: 18.09.2020 r.      

#include <iostream>
#include <vector>
#include <time.h>
#include <cstdlib>

using namespace std;
 
vector <int> nums;
int n;
void setNums() {
    srand(time(NULL));
    for (int i = n; i >= 1; i--) {
        nums.push_back(rand() % 50 + 1); //zakres 1-50
    }
}
void bubbleSort() {
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    cin >> n;

    setNums();

    bubbleSort();
    for (int i = 0; i < n; i++) {
        cout << nums[i] << endl;
    }
}

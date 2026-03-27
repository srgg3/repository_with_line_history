#include <iostream>
#include <vector>

using namespace std;

void fib(int n){
    int first = 1;
    int second = 1;
    vector <int> nums;
    nums.push_back(first);
    if (n == 1){
        cout << nums.back();
    }
    nums.push_back(second);
    if (n == 2){
        cout << nums.back();
    }
    while (nums.size() < n){
        nums.push_back(nums[nums.size() - 2] + nums[nums.size() - 1]);
    }
    cout << nums.back();
}

int main(){
    cout << "Hello, World!" << endl;
    fib(10);
}
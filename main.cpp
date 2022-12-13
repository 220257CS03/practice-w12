
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//void fanc(vector<int>nums, int size){
//    int numbers = 0;
//    int sum = 0;
//    for(int i = 0; i < size; i++){
//        cin>>numbers;
//        nums.push_back(numbers);
//        sum += numbers;
//    }
//
//    int min = nums[0];
//    int max = nums[0];
//    for(int i = 0; i < nums.size(); i++){
//            if(min > nums[i]){
//                min = nums[i];
//            }
//    }
//
//    for(int i = 0; i < nums.size(); i++){
//            if(max < nums[i]){
//                max = nums[i];
//            }
//    }
//    cout<<"Minimum = "<<min<<endl;
//    cout<<"Maximum = "<<max<<endl;
//    cout<<"Average = "<<static_cast<double>(sum) /size<<endl;
//
//}
//int main() {
//    vector<int>nums;
//    int n = 0;
//    cin>>n;
//    fanc(nums, n);
//    return 0;
//}

//PROBLEM 2


//int main()
//{
//    string word;
//    cin>>word;
//    int counter = 0;;
//
//    for(int i = 0; i < word.length(); i++){
//        if(word[i] != word[i+1]){
//            counter++;
//        }
//    }
//    cout<<counter<<endl;
//}

//PROBLEM 3
//void fanc(vector<int> arr, int *size){
//    for(int i = 0; i < *size; i++){
//        if(arr[i] % 2 == 0){
//            cout<<arr[i]<<" ";
//        }
//    }
//}
//
//int main(){
//    vector<int> arr;
//    int n = 0;
//    cin>>n;
//    int *ptr_n=&n;
//    for(int i=0; i<n; i++){
//        int input;
//        cin>>input;
//        arr.push_back(input);
//    }
//
//    fanc(arr, ptr_n);
//}

// PROBLEM 4
//void radToDeg(int &r){
//    double deg = r * (static_cast<double>(180)/3.14);
//    cout<<deg;
//}
//
//
//int main(){
//    int radian = 0;
//    cin>>radian;
//    radToDeg(radian);
//}
//

//PROBLEM 5
void max(int *x, int *y, int *z){
    if(*x > *y && *x > *z){
        *x = 10000;
    }else if(*y > *x && *y > *z){
        *y = 10000;
    }else{
        *z = 10000;
    }
}

void min(int *x, int *y, int *z){
    if(*x < *y && *x < *z){
        *x = -1;
    }else if(*y < *x && *y < *z){
        *y = -1;
    }else{
        *z = -1;
    }
}
int main() {
    int a, b, c;
    cin>>a>>b>>c;
    max(&a,&b,&c);
    min(&a,&b,&c);
    cout<<a<<" "<<b<<" "<<c;

    return 0;
}

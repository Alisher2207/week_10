// #include <iostream>
// #include<algorithm>
// #include<vector>
// #include<unordered_map>
// using namespace std;
//
// // problem 2
//
// float avarage(int numbers[], int size){
//     float sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += (float)numbers[i];
//     }
//     return sum / size;
// }
//
// // problem 3
//
// int minimum(int array[], int size) {
//     int min = array[0];
//     for (int i = 1; i < size; i++) {
//         if (array[i] < min)
//             min = array[i];
//     }
//     return min;
// }
//
// // problem 4
//
// int indexoflargestelement(double array[], int size) {
//     int index=0;
//     for (int i = 1; i < size; i++) {
//         if (array[i] > array[index]) {
//             index = i;
//         }
//     }
//     return index;
// }
//
// // problem 5
//
// bool strictlyEqual(const int list1[], const int list2[],int size) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) {
//             return false;
//         }
//     }
//     return true;
// }
//
// // problem 9
//
// void reverseArray(int arrr[], int start, int end) {
//     while (start < end) {
//         int temp = arrr[start];
//         arrr[start] = arrr[end];
//         arrr[end] = temp;
//         start++;
//         end--;
//     }
// }
//
// // problem 10
//
// void reverseArrayy(int ary[], int strt, int nd) {
//     if (strt >= nd) return;
//     int temp = ary[nd];
//     ary[nd] = ary[strt];
//     ary[strt] = temp;
//     reverseArrayy(ary, strt + 1, nd-1);
//
// }
//
// // problem 11
//
// vector<int> twoSum(const vector<int>& nums, int target) {
//     unordered_map<int, int> num_map;
//     for (int i = 0; i < nums.size(); ++i) {
//         int complement = target - nums[i];
//         if (num_map.find(complement) != num_map.end()) {
//             return {num_map[complement], i};
//         }
//         num_map[nums[i]] = i;
//     }
//     return {};
// }
//
//
// // problem 12
//
// int unique(int nums[], int y) {
//     int common;
//
//     if (nums[0] == nums[1])
//         common = nums[0];
//     else if (nums[0] == nums[2])
//         common = nums[0];
//     else
//         common = nums[1];
//
//
//     for (int i = 0; i < y; ++i) {
//         if (nums[i] != common)
//             return i + 1;
//     }
//     return -1;
// }
//
//
// int main() {
//     // prblem1
//
//     int n ;
//     int sum = 0;
//     cin>>n;
//     int the_numbers[n];
//     for(int i=0;i<n;i++) {
//         cin>>the_numbers[i];
//     }
//     for(int i=0;i<n;i++) {
//         sum+=the_numbers[i];
//     }
//     cout<<sum<< endl;
//
//     // problem2'
//
//     int a[100];
//     cin>>a[0];
//     cout<< "the avarage number is "<< avarage(a,n);
//
//     //problem 3
//
//     cout<< "the minimum number is "<< minimum(a,n)<< endl;
//
//     //problem 4
//
//     double b[15];
//
//     cout << indexoflargestelement(b,n)<< endl;
//
//     //problem 5
//
//     int c;
//     cin>>c;
//     int list1[100], list2[100];
//     for (int i=0; i<n; i++) {
//         cin >> list1[i];
//     }
//
//     for (int i=0; i<n; i++) {
//         cin >> list2[i];
//     }
//
//     if (strictlyEqual(list1, list2, n))
//         cout<< "equal" << endl;
//     else
//         cout << "not equal" << endl;
//
//
//     // problem 6
//
//     int k;
//
//     cin >> k;
//
//     char arr[k];
//
//
//     for (int i = 0; i < k; i++) {
//         cin >> arr[i];
//     }
//
//     int upper = 0, lower = 0, digit = 0, special = 0;
//
//     for (int i = 0; i < k; i++) {
//         if (arr[i] >= 'A' && arr[i] <= 'Z')
//             upper++;
//         else if (arr[i] >= 'a' && arr[i] <= 'z')
//             lower++;
//         else if (arr[i] >= '0' && arr[i] <= '9')
//             digit++;
//         else
//             special++;
//     }
//
//     cout << "Uppercase: " << upper << endl;
//     cout << "Lowercase: " << lower << endl;
//     cout << "Digit: " << digit << endl;
//     cout << "Special: " << special << endl;
//
//     // problem 7
//
//     int z;
//     cout<< " n= ";
//     cin>>z;
//     int ar[z];
//     cout << "enter numbers: ";
//     for (int i = 0; i < z; i++) {
//         cin>>ar[i];
//     }
//     sort(ar, ar+z);
//     for (int i = 0; i < z; i++) {
//         cout<<ar[i]<<" ";
//     }
//     cout<<endl;
//
//
//     // problem 8
//
//     // const int R=10000;
//     // int count[6]={0};
//     // srand(time(0));
//     // for (int i=0;i<R;i++) {
//     //     int value = rand()%6+1;
//     //     count[value-1]++;
//     // }
//     // for (int i=0;i<6;i++) {
//     //     cout<<count[i]<< endl;
//     // }
//
//     // problem 9
//
//     int y;
//     cin>>y;
//     int arrr[y];
//     for (int i=0;i<y;i++) {
//         cin>>arrr[i];
//     }
//     reverseArray(arrr,0, y-1);
//     for (int i=0;i<y;i++) {
//         cout<<arrr[i]<<" ";
//     }
//
//     cout<<endl;
//
//     // problem 10
//
//     reverseArrayy(arrr,0,y-1);
//     for (int i=0;i<y;i++) {
//         cout<<arrr[i]<<" ";
//     }
//     cout<<endl;
//
//     // problem 11
//
//     vector<int> nums1 = {2, 7, 11, 15};
//     int target1 = 9;
//     vector<int> result1 = twoSum(nums1, target1);
//     cout << "[" << result1[0] << ", " << result1[1] << "]" << endl;
//
//     vector<int> nums2 = {3, 2, 4};
//     int target2 = 6;
//     vector<int> result2 = twoSum(nums2, target2);
//     cout << "[" << result2[0] << ", " << result2[1] << "]" << endl;
//
//     // problem 12
//
//         int x;
//         cin >> x;
//         int nums[100];
//         for (int i = 0; i < x; ++i) {
//             char ch;
//             cin >> ch;
//             nums[i] = ch - '0';
//         }
//
//         int result = unique(nums, x);
//         cout << result << endl;
//         return 0;
//     }
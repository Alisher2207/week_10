 #include<iostream>
 using namespace std;
 //int main() {
//     //arrays
//     //problem1
//     //     int n,sum=0;
//     //     cout<<"Enter number of numbers"<<endl;
//     //     cin>>n;
//     //     int array[n];
//     //     for(int i=0;i<n;i++){
//     //         cout<<"Enter "<<i+1<<"- number: ";
//     //         cin>>array[i];}
//     //
//     //
//     //     for(int i=0;i<n;i++) {
//     //         sum=sum+array[i];
//     //
//     //     }
//     //
//     // cout<<"Sum is "<<sum<<endl;}
//     //problem2
//     // int n,sum=0;
//     // cout<<"Enter number of numbers"<<endl;
//     // cin>>n;
//     // int array[n];
//     // for(int i=0;i<n;i++){
//     //     cout<<"Enter "<<i+1<<"- number: ";
//     //     cin>>array[i];}
//     //
//     //
//     // for(int i=0;i<n;i++) {
//     //     sum=sum+array[i];
//     //
//     // }
//     //
//     // cout<<"Average=  "<<float(sum)/n<<endl;}
//
//     //problem3
//
//     float min(int n ){
//         float array2[n];
//         for (int i = 0; i < n; i++) {
//             cout<<"enter"<<i+1<<endl;
//             cin>>array2[i];
//
//         }
//         float min=array2[0];
//         for(int i=1;i<n;i++) {
//             if(array2[i]<min) {
//                 min=array2[i];
//             }
//         }
//     }
// }




// int countEvenDigits(int n) {
//
//     if (n == 0)
//         return 0;
//
//     int lastDigit = n % 10;
//     int isEven = (lastDigit % 2 == 0) ? 1 : 0;
//
//
//     return isEven + countEvenDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//
//     cout << "Number of even digits: " << countEvenDigits(n) << endl;
//
//     return 0;
//}
   //problem4
//
//    int indexOfLargestElement(double array[], int size){
// int maxIndex = 0 ;
// for (int i = 0; i < size; i++) {
//     if (array[i] >= array[maxIndex]){
//         maxIndex = i;
//     }
// }
// return maxIndex;
// }
// int main() {
//     double numbers[15];
//     cout<<"Enter 15 numbers : ";
//     for( int i = 0; i < 15; i++){
//         cin>>numbers[i];
//     }
//     cout<<"Largest element : "<<indexOfLargestElement(numbers, 15)<<endl;
//     return 0;
// }

// //problem5
// bool strictlyEqual(const int list1[], const int list2[],int size ) {
//     for (int i = 0; i < size; i++) {
//         if (list1[i] != list2[i]) return false;
//     }
//     return true;
//     }
// int main() {
//     int n; cout<<"Size = "; cin>>n;
//     int list1[n];
//     for (int i = 0; i<n; i++) cin>>list1[i];
//     int list2[n];
//     for (int i = 0; i<n; i++) cin>>list2[i];
//     if (strictlyEqual(list1,list2,n)) cout<<5"Two lists are strictly identical"<<endl;
//     else cout<<"Two lists are not identical"<<endl;
//     return 0;
// }
//problem6
// int n6;
// cin >> n6;
// int upp = 0, low = 0, digit = 0, special = 0;
// char array6[n6];
// for (int i= 0;i< n6; i++) {
//     cin>>array6[i];
// }
//     for (int  i = 0; i < n6; i++) {
//     if ( 97 <=array6[i] && array6[i] <= 122) {
//         low+=1;
//     } else if (65 <= array6[i] && array6[i]<= 90) {
//         upp+= 1;
//     } else if (48 <= array6[i] && array6[i] <= 57) {
//         digit +=1;
//
//     } else {
//         special += 1;
//     }
//
// }
// cout <<"Uppercase:" << upp<<"\nLowercase:"<<low/,/,"\nDigit:"<<digit<<"\nSpecial:"<<special;
//problem7
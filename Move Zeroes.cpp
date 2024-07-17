#include<bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int low = 0, high = nums.size(),mid = 0;
        while(mid < high){
            if(nums[mid] != 0){
             swap(nums[low], nums[mid]);
             low++;  
            }
            mid++; 
        }

    }
int main(){

vector<int> nums = {0,1,0,3,12};
moveZeroes(nums);

for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}
 
return 0;
}
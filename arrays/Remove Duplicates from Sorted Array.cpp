#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
      int j = 1;
      for(int i = 0;i < nums.size()-1;i++){
        if(nums[i] != nums[i+1]){
            nums[j] = nums[i+1];
            j++;
        }
      }
      return j;
    }
int main(){

vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
int n = removeDuplicates(nums);
cout<<n<<endl;
 
return 0;
}
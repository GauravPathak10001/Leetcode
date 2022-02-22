#include<iostream>
#include<map>
#include<vector>
using namespace std;
// the function twoSum is same as on leetcode function.
vector<int> twoSum(vector<int> nums, int target){
 map<int,int>mpp;
 vector<int> ans;
  for(int i=0;i<nums.size();i++){
  if(mpp.find(target-nums[i])!=mpp.end()){
   ans.push_back(mpp[target-nums[i]]);
    ans.push_back(i);
    return ans;
 }
    mpp[nums[i]]=i;
  }
  return ans;
}
// main function to pass the input and function call.
int main()
{
  int n,target;
 cin>>n;
 vector<int> nums(n), ans;
 for(int i=0;i<n;i++){
  cin>>nums[i]; 
 }
  cin>>target;
 ans=twoSum(nums,target); 
 for(auto i: ans){
  cout<<i<<"  ";
 }
}

// O(N).
// Topic related: HASH MAP, VECTOR. 

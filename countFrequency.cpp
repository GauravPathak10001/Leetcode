#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v1(n);
for(int i=0;i<n;i++){
cin>>v1[i];
}
map<int,int>m1;
for(int i=0;i<v1.size();i++)
{
m1[v1[i]]++;
}
map<int,int>::iterator it;
for(it=m1.begin();it != m1.end();it++){
cout<<m1->first<<"  "<<m1->second<<endl;
}
}

// Time complexity: O(N).
// hash map  vector.

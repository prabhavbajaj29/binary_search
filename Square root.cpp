#include<bits/stdc++.h>
using namespace std;

int sqrt(int n){
    int start=0;
    int end=n;
    long long int mid=start+(end-start)/2;

    long long int answer=0;

    while(start<=end){
        long long int square=mid*mid;

        if(square==n){
            answer=mid;
        }
        if (square>n){
            end=mid-1;
        }
        else{
            
            answer=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return answer;
}


double morePrecision(int n,int precision,int tempSolution){

    double factor=1;
    double ans=tempSolution;

    for (int i=0;i<precision;i++){

        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
       

    }
    return ans;
}



int main(){
    int n;
    
    cin>>n;

    int precision;
    
    cin>>precision;

    int tempSolution=sqrt(n);

    cout<<"The answer is : "<<morePrecision(n,precision,tempSolution)<<endl;


}
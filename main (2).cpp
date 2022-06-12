   #include<iostream>
 using namespace std;
 
 int main(){
     int n,i,min,max,temp;
     cout<<"Enter the size of the Array:"<<endl;
     cin>>n;
     int A[n];
     cout<<"Enter the Elements of the Array:"<<endl;
     for(i=0;i<n;i++){
         cin>>A[i];
     }
     if(n==1){
         min=A[0];
         max=A[0];
     }
     
     if(A[0]<A[1]){
        temp=A[0];
        A[0]=A[1];
        A[1]=temp;
     }
     
         min=A[0];
         max=A[1];
    
     
     if(A[0]<A[1]){
        temp=A[0];
        A[0]=A[1];
        A[1]=temp;
     }
     
     for(i=2;i<n;i++){
         if(A[i]<min){
             min=A[i];
         }
         else if(A[i]>max){
             max=A[i];
         }
         
         
     }
     
     cout<<"Minimum Number is"<<min<<endl;
     cout<<"Maximum Number is"<<max;
     
     return 0;
 }
#include<stdio.h>
void mergesort(int a[],int l,int h);
void merge(int a[],int l,int mid,int h);
int main(){
    int a[6]={20,10,50,40,30,15};
    int l=0,h=5;
    mergesort(a,l,h);
}
void mergesort(int a[],int l,int h){
        int mid;
        if(l<h){
                mid=(l+h)/2;
                mergesort(a,l,mid);
                mergesort(a,mid+1,h);
                merge(a,l,mid,h);
        }
}
void merge(int a[],int l,int mid,int h){
    int i=l,k=l,b[6],j=mid+1;
    while(i<=mid && j<=h){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;
            k++;
            

        }
        else{
            b[k]=a[j];
            j++;
            k++;
            
        }
    }
    
    if(i>mid){
               while(j<=h){
                   b[k]=a[j];
                   k++;
                   j++;
               }
        }
    else{
        while(i<=mid){
                b[k]=a[i];
                k++;
                i++;
        }
    }
    for(k=l;k<h+1;k++){
                    a[k]=b[k];
        
                    printf("\n%d\n",a[k]);}
}
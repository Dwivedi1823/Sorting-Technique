#include <bits/stdc++.h>
using namespace std;

int  partition(vector<int>& v,int l, int h)
{
    int pivot = v[l];
    int i = l, j = h;
    while(i < j){
        do{
            i++;
        }while(v[i] <= pivot);
        
        do{
            j--;
        }while(v[j] > pivot);
        
        if(i<j)
            swap(v[i], v[j]);
    }
    swap(v[l], v[j]);
    return j;
}

void QuickSort(vector<int>& v,int l, int h)
{
    if(l < h){
        int j = partition(v,l,h);
        QuickSort(v,l,j);
        QuickSort(v,j+1,h);
    }
}

int main() {
	vector<int> v{10, 20, 5, 4, 30, 3, 6};
	v.push_back(INT_MAX);
	QuickSort(v,0,v.size() - 1);
	for(auto it = v.begin(); it!= v.end() - 1; it++)
	    cout<<*it<<" ";
	return 0;
}

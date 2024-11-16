#include<iostream>
#include<fstream>
#include<vector>


bool IsBinHeap(std::vector<int>& heap)
{
    int limit
    if(heap.size()%2==0)
        for(int i(1);i*2<heap.size();++i)
        {
            if(!(heap[i]<=heap[i*2]&&heap[i]<=heap[i*2+1])) 
                return false;
        }
     else
        for(int i(1);i*2<heap.size()&&i*2+1<heap.size();++i)
        {
            if(heap[i]<=heap[i*2]&&heap[i]<heap[i*2+1]) 
                return true;
            else
                return false;
        }
    
}

int main()
{
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    std::vector<int> arr;
    int arr_size(0);

    in>>arr_size;
    arr.push_back(-1);
    for(int i(0),tmp(0);i<arr_size;++i)
    {
        in>>tmp;
        arr.push_back(tmp);
    }
         
    if(IsBinHeap(arr))
        out<<"Yes";
    else
        out<<"No";

    in.close();
    out.close();
}

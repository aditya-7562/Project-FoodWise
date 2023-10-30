#include<iostream>
using namespace std;
int main()
{
    int* pvalue = NULL;
    pvalue = new int;
    *pvalue=23;
    cout<<"Address where pointer stored: "<<pvalue<<endl;
    delete pvalue;
    cout<<"Address where pointer stored after deletion: "<<pvalue<<endl;
    pvalue=NULL;
    cout<<"\n"<<pvalue;
}

#include <iostream>
#include "process.h"
using std::cout,std::endl;

void Process::PlanProcess(){
    cout<<"this is process"<<endl;
    mymap.mapInfo();
    cout<<"planning success"<<endl;
}
#include "common.h"


People::People(){

}

People::~People(){
    
}


std::string People::get_name(){
    return this->name;
}

int16_t People::get_age(){
    return this->age;
}
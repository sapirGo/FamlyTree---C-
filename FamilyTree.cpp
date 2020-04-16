#include <iostream>
#include "FamilyTree.hpp"

using namespace std;
using namespace family;


Tree::Tree(string root){
    node* newNode = new node();

}


Tree::~Tree(){
   
}

Tree& Tree::addFather(string son, string father){ //need to write function


    return *this;
}

Tree& Tree::addMother(string son, string mother){ //need to write function


    return *this;
}

string Tree::relation(string name){ //need to write function


    return " ";
}

string Tree::find(string relation){ //need to write function

    return " ";
}

void Tree::display(){ //need to write function

}

void Tree::remove(string name){ //need to write function

}

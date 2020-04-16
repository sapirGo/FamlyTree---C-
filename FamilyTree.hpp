#include <iostream>

using namespace std;
namespace family{
    class Tree{
        
    public:
        struct node {
            string data;
            struct node *mom, *dad;

        };
        node *T_root;

        Tree(std::string root);


        ~Tree();


        Tree& addFather(std::string son, std::string dad);//addFather header


        Tree& addMother(std::string son, std::string mom);//addMother header


        string relation(std::string name);//relation header


        string find(std::string relation);// find header


        void display();//display header


        void remove(std::string name);// remove header
    };
};

#include <iostream>

using namespace std;

int main(){
    cout << "test" << endl;

    return 0;
}

/*
WEEK 9: UML DIAGRAMS
**RECOMMENDED to look up diagrams**

> use case diagram
    >used to describe how a system works and how the user interacts with it
        >state the actor/user
        >state the system's boundary, which'll contain every use case/function
        >state the system's functions that the user will act

    >there's also use case specification
        >a more detailed, worded explanation of the diagram typically
        laid out as a table



> diagram from yr1 (forgot name)
    > changes between "states", and the links between states are the function
    or action the system does to change from one state to another
        >  good for pinpoining each step of how a system works out,
        from start to end


> activity diagram
    > consists of various types of nodes, to which one node links to
    another or more nodes
    > similar to use case diagram, such that it shows the flow of user
    interactions with the system
        > initial node, action node, decision and merge nodes, final node

    >realised layout is similar to prev. diagram
        

> class diagram
    > seen in week7, it lays out the contents of a class
        > the public and private attributes, its variables and functions
        > some cases links to child classes/shows relationship between
        classes
            > private -> -
            public -> +
            function's and variable's data type mentioned along with its names
                > e.g., '-name: std::string' and '-salary: int'

            arrows pointing from one class to another
                > this means a child class inherits/linked to parent class
                > can also state what attributes it borrows


> sequence diagram
    > linking to the use case diagram, it further explains how the use
    case functionality is achieved
        > typically uses programming language functions, variables, instead
        of general names for naming the system's functions and user actions


> UML diagram software
    > instead of drawing it, just use software to make diagrams easier
    > UMLet
    > draw.io
*/
#include "turtlec.h"

void fractalTree(Turtle *turtle, float length, int depth){
    if(depth == 0) return;
    if(depth > 2) turtleSetColor(turtle, 120, 70, 20);
    else turtleSetColor(turtle, 0, 200, 0);
    turtleForward(turtle, length);
    turtleLeft(turtle, 30.0f);
    fractalTree(turtle, length * 0.7, depth - 1);
    turtleRight(turtle, 60.0f);
    fractalTree(turtle, length * 0.7, depth - 1);
    turtleLeft(turtle, 30.0f);
    if(depth > 2) turtleSetColor(turtle, 120, 70, 20);
    else turtleSetColor(turtle, 0, 200, 0);
    turtleBackward(turtle, length);
}

void programa(Turtle *turtle){
    turtleSetSpeed(turtle, 300.0f);
    turtleLeft(turtle, 90.0f);
    fractalTree(turtle, 100.0f, 7); 
}

int main() {
    turtleRun(programa, 900, 900, "Arbol Fractal");
    return 0;
}

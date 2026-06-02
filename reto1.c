#include "turtlec.h"

void fractalTreeT(Turtle *turtle, float length, int depth) {
    if (depth == 0 || length < 5) return;
    if (depth > 2) turtleSetColor(turtle, 120, 70, 20);
    else turtleSetColor(turtle, 0, 200, 0);
    turtleForward(turtle, length);
    turtleLeft(turtle, 45);
    fractalTreeT(turtle, length * 0.65f, depth - 1);
    turtleRight(turtle, 45);
    fractalTreeT(turtle, length * 0.75f, depth - 1);
    turtleRight(turtle, 45);
    fractalTreeT(turtle, length * 0.55f, depth - 1);
    turtleLeft(turtle, 45);
    turtleBackward(turtle, length);
}

void programa(Turtle *turtle){
   turtleSetSpeed(turtle, 15.0f);
   turtleLeft(turtle, 90.0f);
   fractalTreeT(turtle, 100.0f, 4);
}

int main(){
   turtleRun(programa, 800, 600, "Tree");
   return 0;
}

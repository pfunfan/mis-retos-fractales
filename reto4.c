#include <math.h>
#include "turtlec.h"

void levy(Turtle *turtle, float length, int depth) {
    int colores[11][3] = {
        {255,0,0}, {255,64,0}, {255,128,0}, {255,192,0},
        {255,255,0}, {192,255,0}, {128,255,0}, {64,255,0},
        {0,255,0}, {0,128,255}, {128,0,255}
    };
    
    if (depth == 0) {
        turtleSetColor(turtle, colores[depth][0], colores[depth][1], colores[depth][2]);
        turtleForward(turtle, length);
        return;
    }

    turtleSetColor(turtle, colores[depth][0], colores[depth][1], colores[depth][2]);
    turtleLeft(turtle, 45);
    levy(turtle, length / sqrt(2), depth - 1);
    turtleRight(turtle, 90);
    levy(turtle, length / sqrt(2), depth - 1);
    turtleLeft(turtle, 45);
}

void programa(Turtle *turtle) {
    turtleSetSpeed(turtle, 30.0f);
    turtlePenUp(turtle);
    turtleGoTo(turtle, 300.0f, 500.0f);
    turtlePenDown(turtle);
    levy(turtle, 350.0f, 10);
}

int main() {
    turtleRun(programa, 950.0f, 750.0f, "Curva de Levy Colorida por Niveles");
    return 0;
}

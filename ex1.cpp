#include <iostream>
#include <graphics.h>
#include <math.h>

using namespace std;

void DDA(int x1, int y1, int x2, int y2) {
    // Calculate the differences in x and y
    int dx = x2 - x1;
    int dy = y2 - y1;
    
    // Calculate steps required for generating pixel positions
    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    // Calculate the increment in x and y for each step
    float xIncrement = dx / (float) steps;
    float yIncrement = dy / (float) steps;

    // Set the initial point
    float x = x1;
    float y = y1;

    // Draw the line
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    // Initialize the graphics window
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Define the coordinates of the two endpoints of the line
    int x1 = 100, y1 = 100;
    int x2 = 300, y2 = 200;

    // Call the DDA function to draw the line
    DDA(x1, y1, x2, y2);

    // Wait for the user to press a key
    getch();
    closegraph();

    return 0;
}

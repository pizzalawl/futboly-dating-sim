#include "raylib.h"

struct DialogBox {
    char* contents;
    Rectangle dimensions;
    Color backgroundColor;
    bool shadow;
    float thickness;
    int fontSize;
};

void dialogDraw(struct DialogBox dialog) {
    if(dialog.shadow){
        DrawRectangle(dialog.dimensions.x - 5, dialog.dimensions.y + 5, dialog.dimensions.width, dialog.dimensions.height, GRAY);
    }
    DrawRectangleRec(dialog.dimensions, dialog.backgroundColor);
    DrawRectangleLinesEx(dialog.dimensions, dialog.thickness, BLACK);
    DrawText(dialog.contents, dialog.dimensions.x + 10, dialog.dimensions.y + 10, dialog.fontSize, BLACK);
}
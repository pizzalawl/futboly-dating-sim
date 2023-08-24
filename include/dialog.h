#ifndef DIALOGBOX_H
#define DIALOGBOX_H

#include "raylib.h"

struct DialogBox {
    char* contents;
    Rectangle dimensions;
    Color backgroundColor;
    bool shadow;
    float thickness;
    int fontSize;
};

void dialogDraw(struct DialogBox dialog);

#endif // DIALOGBOX_H





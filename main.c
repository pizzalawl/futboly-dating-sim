#include "raylib.h"
#include "dialog.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    Image backgroundImage = LoadImage("assets/backgrounds/classroom.png");
    Image characterImage = LoadImage("assets/sprites/messi.png");

    Image *backgroundPtr = &backgroundImage;
    Image *characterPtr = &characterImage;

    ImageResize(backgroundPtr, screenWidth, screenHeight);
    ImageResize(characterPtr, 313, 540);

    struct DialogBox dialog = {
    .contents = "Fuck u",
    .dimensions = {10, 10, screenWidth - 20, screenHeight - 20},
    .backgroundColor = RAYWHITE,
    .shadow = true,
    .thickness = 5,
    .fontSize = 40
    };

    InitWindow(screenWidth, screenHeight, "Futboly Dating Sim");

    Texture2D background = LoadTextureFromImage(backgroundImage);
    Texture2D character = LoadTextureFromImage(characterImage);

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(WHITE);
            DrawTexture(background, 0, 0, WHITE);
            DrawTexture(character, 30, screenHeight/2, WHITE);

            //dialogDraw(dialog);
            if(IsKeyPressed(KEY_SPACE)){
                dialog.contents = "LMAOOOO";
            }

        EndDrawing();
    }

    UnloadTexture(background);
    UnloadTexture(character);
    CloseWindow();

    return 0;
}

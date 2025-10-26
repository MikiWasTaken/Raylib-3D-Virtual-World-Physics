#include "raylib.h"
#include "Camera3DController.h"
#include "Scene.h"

int main() {
    InitWindow(1200, 800, "3D Virtual World Physics");
    SetTargetFPS(60);

    Camera3DController cameraController;
    while (!WindowShouldClose()) {
        Camera camera = cameraController.GetCamera();
        cameraController.Update();

        BeginDrawing();
        ClearBackground(GRAY);

        BeginMode3D(camera);
        DrawSceneCube();
        EndMode3D();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}

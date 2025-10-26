//
// Created by David on 24/10/2025.
//

#include "Camera3DController.h"

Camera3DController::Camera3DController() {
    camera.position = cameraPosition;
    camera.target = cameraTarget;
    camera.up = cameraUp;
    camera.fovy = cameraFovy;
    camera.projection = cameraPerspective;
    isFreeMode = false;
}

void Camera3DController::Update() {
    if (IsKeyPressed(KEY_C)) ToggleFreeMode();
    if (IsKeyPressed(KEY_R)) Reset();

    if (isFreeMode) {
        UpdateCamera(&camera, CAMERA_FREE);
    }
}

void Camera3DController::ToggleFreeMode() {
    isFreeMode = !isFreeMode;
}


void Camera3DController::Reset() {
    camera.position = cameraPosition;
    camera.target = cameraTarget;
    camera.up = cameraUp;
}

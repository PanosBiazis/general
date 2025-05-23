#include <iostream>
#include <windows.h>

// Function to simulate a mouse click at a given position
void autoClick(int x, int y) {
    // Infinite loop for continuous clicking
    while (true) {
        // Set the mouse position
        SetCursorPos(x, y);

        // Simulate mouse down and mouse up events (equivalent to a click)
        mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        // Sleep for 100 milliseconds (0.1 seconds)
        Sleep(100);

        // Check if the ESC key is pressed
        if (GetAsyncKeyState(VK_ESCAPE)) {
            std::cout << "Escape key pressed. Exiting." << std::endl;
            break;
        }
    }
}

int main() {
    // Set the target position (example: center of a 4K screen)
    int x_position = 1000; // x coordinate
    int y_position = 1000; // y coordinate

    std::cout << "Press the Escape key to stop." << std::endl;

    // Call the autoClick function with the specified coordinates
    autoClick(x_position, y_position);

    return 0;
}

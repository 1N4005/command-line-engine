#include "text_engine.h"

window::window(string _bg, int _width, int _height) {
    width = _width;
    height = _height;
    bg = _bg;
}

window::window(int width, int height) {
    window("game window", width, height);
}

void window::refresh() {
    // system("clear");
    printf("height: %d width: %d \n", height, width);
    for (int in=0; in<height; in++){
        for(int i=0; i<width; i++) {
            cout << bg;
        }
        cout << endl;
    }

    for(int i=0; i<components.size(); i++) {
        components[i].draw();
    }
}



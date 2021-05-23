#ifndef TEXT_ENGINE_H
#define TEXT_ENGINE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;

class component {
    public:
        int x;
        int y;

        virtual void draw();
};

class window {
    public:
        int width;
        int height;
        string bg;
        vector<component> components;

        window(string _bg, int _width, int _height);
        window(int width, int height);

        void refresh();
        void add(component c);
};



#endif
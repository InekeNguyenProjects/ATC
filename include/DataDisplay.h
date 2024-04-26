/*
 * DataDisplay.h
 *
 * Created on: Apr 2, 2024
 * Author: mikenkie
 */
#ifndef DATADISPLAY_H_
#define DATADISPLAY_H_

#include "Aircraft.h"

class DataDisplay {
    private:
    public:
        DataDisplay();
        void displayInfoToRadar(Aircraft& aircraft);

};

#endif

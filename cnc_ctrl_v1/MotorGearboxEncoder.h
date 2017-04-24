    /*This file is part of the Makesmith Control Software.

    The Makesmith Control Software is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Makesmith Control Software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with the Makesmith Control Software.  If not, see <http://www.gnu.org/licenses/>.
    
    Copyright 2014-2017 Bar Smith*/
    
    #ifndef MotorGearboxEncoder_h
    #define MotorGearboxEncoder_h

    #include "Arduino.h"
    #include "Encoder.h"
    #include "Motor.h"
    
    class MotorGearboxEncoder{
        public:
            MotorGearboxEncoder(int pwmPin, int directionPin1, int directionPin2, int encoderPin1, int encoderPin2);
            Encoder    encoder;
            Motor      motor;
            float      computeSpeed();
        private:
            double     _lastPosition;
            double     _lastTimeStamp;
            float      _runningAverage(int newValue);
            int        _oldValue1;
            int        _oldValue2;
            int        _oldValue3;
            int        _oldValue4;
            int        _oldValue5;
            int        _oldValue6;
            int        _oldValue7;
            int        _oldValue8;
            int        _oldValue9;
            int        _oldValue10;
    };

    #endif
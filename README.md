NodeJS Arduino RC Car
===============================

[![Touchpad Control Video](https://github.com/richard512/extremely_remote_controlled_car/blob/master/video_touchpad.gif?raw=true)](https://github.com/richard512/extremely_remote_controlled_car/blob/master/video_touchpad.mp4?raw=true)

## The Idea

Web interface --> Node.js --> Serial port --> Arduino --> RC Controller --> RC Car

## The [Hardware Hack](https://github.com/richard512/NodeJS_Arduino_RC_Car/tree/master/hardware_hack)

## The Arduino Code

Basic operation: back_forward.ino

The fun stuff: serial_port_controlled_car.ino

## Modify it

Edit `app.coffee`.

## Run it

```
coffee app.coffee
```

## Arduino Controls

Send the following numbers over a serial port connection :

* 0 - forward + left
* 1 - forward
* 2 - forward + right
* 3 - backward + left
* 4 - backward
* 5 - backward + right
* 6 - switches all off

## Arduino Dependancies 

* [BasicLibrary](https://github.com/chalkers/BasicLibrary)

## NodeJS Dependancies

* coffee-script
* haml-coffee
* express.io
* express
* express-partials
* serialport


The MIT License (MIT)
=========

Copyright © 2014 [Andrew Chalkley](http://twitter.com/chalkers) http://forefront.io

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the “Software”), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


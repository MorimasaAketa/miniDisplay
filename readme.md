# miniDisplay 

miniDisplay is a tiny Application for Mac showing external HDMI input coming through Blackmagic Design UltraStudio Mini Recorder; a small, portable HDMI capturing device.

If you bring a Mac which has high-resolution monitor such as retina display, and monitor-less HDMI device such like Rapsberry-Pi or Stick PC, you can see the HDMI device's video output in your Mac screen by using BMD Ultrastudio Mini Recorder and miniDisplay.

This application is based on Kyle McDonalds' [ofxBlackmagic](https://github.com/kylemcdonald/ofxBlackmagic)

## Application Usage

* Install Blackmagic Design's Desktop Video Software.
* Plug your BMD UltraStudio Mini Recorder to the Thunderbolt port of Mac.
* Plug other device's HDMI output to Mini Recorder.
* Open miniDisplay.
* Toggle 720p and 1080i by hitting space key, app will resize window to be dot by dot.

## Supported Environment

* A Mac which has Thunderbolt port.
* OS X 10.10 or later.
* Blackmagic Design UltraStudio Mini Recorder.
* Blackmagic Design Desktop Video Software 10.6.6 or Later
* Monitor atatched to Mac larger than 1920x1080.
* HDMI Device with video format 1080i59.94 or  720p59.94.

This application is developed and tested on MacBook Pro Retina Mid 2015, OS X 10.10, Blackmagic Design Desktop Video 10.6.6 (2016-05-13), and BMD UltraStudio Mini Recorder, XCode 7, and openFrameworks 0.8.4 release.

Currently supported video format is 1920x1080i59.94 and 1280x720p59.94 only. 


## Installation for building application

* Install Blackmagic Design's Desktop Video Software.
* Setup openFrameworks 0.8.4 with XCode on Mac.
* Place [ofxBlackmagic 0.8.4-stable branch](https://github.com/MorimasaAketa/ofxBlackmagic/tree/0.8.4-stable) to oF addon folder.
* Plcae this miniDisplay XCode files to oF apps folder.

## To Do 

* Adopt to oF 0.9.x .
* Auto detecting Video Format.
* Image scaling.
* More small latency using FBO or some GPU perforomance method.



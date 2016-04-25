#pragma once

#include "ofMain.h"
#include "ofxBlackMagic.h"

class ofApp : public ofBaseApp{
    ofxBlackMagic capture;
    ofVideoGrabber video;
    public:
        int displayMode; // 0: 1080i,  1: 720i
        bool setupDone;
        void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void exit();
        void toggleMode();
    
};

#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetLogLevel(OF_LOG_VERBOSE);
    ofSetFrameRate(60);

    setupDone = false;
    displayMode = 0; // 0:1080i
    toggleMode(); // toggle to 1080i

    /*
    std::vector<ofVideoDevice> video_devices = video.listDevices();
    int n_devices = video_devices.size();
    int n_formats = 0;
    int n_framerates = 0;
    for(int i = 0; i < n_devices ; i++){
        ofLog(OF_LOG_NOTICE, "vDevices[%d] : %s -- %d", i,
              video_devices[i].deviceName.c_str(),
              video_devices[i].id
              );
        
        n_formats = video_devices[i].formats.size();
        ofLog(OF_LOG_NOTICE, "n_formats : %d", n_formats);
        for (int j=0; j < n_formats; j++) {
            n_framerates = video_devices[i].formats[j].framerates.size();
            for (int k=0; k<n_framerates;k++ ){
                ofLog(OF_LOG_NOTICE, "formats : %d x %d fps %f",
                      video_devices[i].formats[j].width,
                      video_devices[i].formats[j].height,
                      video_devices[i].formats[j].framerates[k]);
            }
        }
    }
    video.setDeviceID(5); //
    video.initGrabber(1920, 1080);
*/

    setupDone = true;
}

//--------------------------------------------------------------
void ofApp::update(){
//    video.update();
    capture.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    capture.drawColor();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == 'f') {
        ofToggleFullscreen();
    }else if( key == '1' ){
        displayMode = 1; // 1:720p
        toggleMode(); // toggle to 1080i

        
//        capture.close();
//        capture.setup(1920, 1080, 59.94);
//        ofSetWindowShape(1920, 1080);

    }else if( key == '2' ){
        displayMode = 0; // 1:720p
        toggleMode(); // toggle to 1080i

//        capture.close();
//        capture.setup(1280, 720, 59.94);
//        ofSetWindowShape(1280, 720);
    }else if( key == ' '){
        toggleMode();
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

//--------------------------------------------------------------
void ofApp::exit(){
    capture.close();
}

//--------------------------------------------------------------
void ofApp::toggleMode(){
    displayMode = (++displayMode)%2;
    if(setupDone){
        capture.close();
    }
    if(displayMode == 0){
        capture.setup(1920, 1080, 59.94);
        ofSetWindowShape(1920, 1080);
        ofSetWindowTitle("1080i. space key to toggle video format. esc to quit.");
    }else if(displayMode == 1){
        capture.setup(1280, 720, 59.94);
        ofSetWindowShape(1280, 720);
        ofSetWindowTitle("720p. space key to toggle video format. esc to quit.");
    }
    
}
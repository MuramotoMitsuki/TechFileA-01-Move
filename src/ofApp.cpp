#include "ofApp.h"
float move_x;//円のX座標を表す変数
float move_y;//円のY座標を表す変数
float speed_x;//円のx座標のスピードを表す変数
float speed_y;//円のy座標のスピードを表す変数
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);//背景色
    
    ofSetFrameRate(60);//一秒間に何枚の画像を表示させるか
    ofSetCircleResolution(64);//円の描写の角を丸くする
    
    move_x = 200;//初期位置を設定
    move_y = 200;//初期位置を設定
    speed_x = 20;//初期速度を設定
    speed_y = 20;//初期速度を設定
    
}

//--------------------------------------------------------------
void ofApp::update(){//アニメーションを進めていく、更新していく
    
    move_x = move_x + speed_x;//毎回x座標を設定された速度分増やしていく
    move_y = move_y + speed_y;//毎回y座標を設定された速度分増やしていく

    if(move_y + 150 > ofGetHeight()){//もしも下の壁に触れたら
        speed_y = speed_y * -1;//speed_yの正負を変える
    }
    if(move_y - 150 < 0){//もしも上の壁に触れたら
        speed_y = speed_y * -1;//speed_yの正負を変える
    }
    if(move_x + 150 > ofGetWidth()){//もしも右の壁に触れたら
        speed_x = speed_x * -1;//speed_xの正負を変える
    }
    if(move_x - 150 < 0){//もしも左の壁に触れたら
        speed_x = speed_x * -1;//speed_xの正負を変える
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 255, 0);
    
    if(move_x >ofGetWidth()/2){
        ofSetColor(255, 0, 0);
    }
    
    ofDrawCircle(move_x, move_y, 150);//円のx座標、y座標を先ほど決めた変数に設定する
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

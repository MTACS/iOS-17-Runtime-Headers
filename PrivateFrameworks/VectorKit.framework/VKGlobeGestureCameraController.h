
@interface VKGlobeGestureCameraController : VKGestureCameraBehavior {
    double  _beganDoublePanPitch;
    void * _cameraManager;
    double  _currentDoublePanPitch;
    void * _globeView;
    bool  _isPitchIncreasing;
}

- (void)beginPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)beginZoom:(struct CGPoint { double x1; double x2; })arg1;
- (void)endPan:(struct CGPoint { double x1; double x2; })arg1;
- (void)endPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)endRotate:(struct CGPoint { double x1; double x2; })arg1;
- (void)endZoom:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isPitchIncreasing;
- (void)setCameraManager:(void*)arg1;
- (void)setGlobeView:(void*)arg1;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end

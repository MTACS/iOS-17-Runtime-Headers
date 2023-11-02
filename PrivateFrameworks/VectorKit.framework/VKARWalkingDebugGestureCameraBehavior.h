
@interface VKARWalkingDebugGestureCameraBehavior : VKGestureCameraBehavior {
    VKARWalkingCameraController * _controller;
}

- (void).cxx_destruct;
- (id)initWithCameraController:(id)arg1;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end

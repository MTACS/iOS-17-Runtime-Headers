
@interface NUDebugRenderView : NURenderView {
    UILongPressGestureRecognizer * _doubleTap;
    CMMotionManager * _motionManager;
    bool  _showDebug;
}

- (void).cxx_destruct;
- (void)_debugToggle:(id)arg1;
- (void)_orientWithX:(double)arg1 andY:(double)arg2;
- (void)_resetOrientation:(id)arg1;
- (void)_setupDeviceMotion;
- (void)_startDeviceMotion;
- (void)_stopDeviceMotion;
- (void)dealloc;
- (bool)debugMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDebugMode:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
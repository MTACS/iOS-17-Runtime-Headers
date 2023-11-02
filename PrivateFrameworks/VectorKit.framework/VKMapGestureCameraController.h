
@interface VKMapGestureCameraController : VKGestureCameraBehavior {
    double  _beganPitch;
    double  _currentPitch;
    bool  _isPitchIncreasing;
    struct CGPoint { 
        double x; 
        double y; 
    }  _panLastScreenPoint;
    struct optional<double> { 
        union { 
            BOOL __null_state_; 
            double __val_; 
        } ; 
        bool __engaged_; 
    }  _rubberbandZoomStartFactor;
    VKTimedAnimation * _zoomAnimation;
    struct optional<double> { 
        union { 
            BOOL __null_state_; 
            double __val_; 
        } ; 
        bool __engaged_; 
    }  _zoomPreviousT;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginPitch:(struct CGPoint { double x1; double x2; })arg1;
- (void)endZoom:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isPitchIncreasing;
- (struct Matrix<double, 3, 1> { double x1[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x1[3]; })arg1;
- (struct Matrix<double, 3, 1> { double x1[3]; })positionClampedToCameraRestriction:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 delta:(struct Matrix<double, 3, 1> { double x1[3]; })arg2;
- (void)updatePan:(struct CGPoint { double x1; double x2; })arg1 lastScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 degrees:(double)arg2;
- (void)updatePitch:(struct CGPoint { double x1; double x2; })arg1 translation:(double)arg2;
- (void)updateRotate:(double)arg1 atScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateZoom:(struct CGPoint { double x1; double x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

@end

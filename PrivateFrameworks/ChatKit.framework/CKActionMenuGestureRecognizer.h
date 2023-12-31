
@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastScreenLocation;
    double  _lastTouchTime;
    CKActionMenuGestureVelocitySample * _previousVelocitySample;
    CKActionMenuGestureVelocitySample * _velocitySample;
}

+ (id)actionMenuGestureRecognizer;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

@end

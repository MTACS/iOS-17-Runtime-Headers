
@interface _UITouchDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction * _activationDelay;
    double  _allowableMovement;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocationInScreenSpace;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInView;
}

@property (nonatomic) double allowableMovement;

- (void).cxx_destruct;
- (void)activationDelayHandler;
- (double)allowableMovement;
- (void)cancelActivationDelay;
- (bool)gestureIsStillValid;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (bool)locationIsMostlyInsideView:(struct CGPoint { double x1; double x2; })arg1;
- (void)recognizeOrFailForCurrentLocation;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

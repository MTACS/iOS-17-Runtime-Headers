
@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {
    double  _allowableMovement;
    long long  _observedTouchCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalPosition;
    UITouch * _primaryTouch;
    double  _startTimestamp;
}

@property (nonatomic) double allowableMovement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double movement;
@property (nonatomic, readonly) long long observedTouchCount;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPosition;
@property (nonatomic, retain) UITouch *primaryTouch;
@property (nonatomic) double startTimestamp;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (double)allowableMovement;
- (double)duration;
- (id)eventName;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)movement;
- (long long)observedTouchCount;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (id)primaryTouch;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPrimaryTouch:(id)arg1;
- (void)setStartTimestamp:(double)arg1;
- (double)startTimestamp;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

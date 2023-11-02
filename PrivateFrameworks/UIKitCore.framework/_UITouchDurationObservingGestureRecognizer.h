
@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer {
    double  _allowableMovement;
    UIDelayedAction * _delayedAction;
    CADisplayLink * _displayLink;
    bool  _hasExceededAllowableMovement;
    double  _minimumDurationRequired;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalCentroid;
    double  _touchForce;
    double  _touchStartTimestamp;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic, readonly) UIDelayedAction *delayedAction;
@property (nonatomic, readonly) CADisplayLink *displayLink;
@property (nonatomic, readonly) bool hasExceededAllowableMovement;
@property (nonatomic) double minimumDurationRequired;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalCentroid;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, readonly) double touchForce;
@property (nonatomic) double touchStartTimestamp;

- (void).cxx_destruct;
- (id)_allTouchesMatchingRequirementsForEvent:(id)arg1;
- (void)_cancelOrFail;
- (void)_displayLinkDidFire:(id)arg1;
- (bool)_exceededNumberOfTouchesForEvent:(id)arg1;
- (void)_performDelayedBegin;
- (double)allowableMovement;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)delayedAction;
- (id)displayLink;
- (bool)hasExceededAllowableMovement;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)minimumDurationRequired;
- (struct CGPoint { double x1; double x2; })originalCentroid;
- (void)reset;
- (void)setAllowableMovement:(double)arg1;
- (void)setMinimumDurationRequired:(double)arg1;
- (void)setOriginalCentroid:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTouchStartTimestamp:(double)arg1;
- (double)touchDuration;
- (double)touchForce;
- (double)touchStartTimestamp;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

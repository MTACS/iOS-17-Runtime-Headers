
@interface _UILongPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegatePrivate, _UIClickInteractionDriving> {
    unsigned long long  _behavior;
    bool  _cancelsTouchesInView;
    double  _clickDownDuration;
    unsigned long long  _currentState;
    <_UIClickInteractionDriverDelegate> * _delegate;
    struct { 
        bool didUpdateHighlightProgress; 
        bool shouldDelayGesture; 
        bool shouldBeDelayedByGesture; 
    }  _delegateImplements;
    double  _forceMultiplier;
    _UITouchDurationObservingGestureRecognizer * _gestureRecognizer;
    bool  _reachedClickDownThreshold;
    UIView * _view;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic) bool cancelsTouchesInView;
@property (nonatomic) double clickDownDuration;
@property (nonatomic, readonly) double clickTimeoutDuration;
@property (nonatomic, readonly) bool clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long driverStyle;
@property (nonatomic) double forceMultiplier;
@property (nonatomic, retain) _UITouchDurationObservingGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) bool hasExceededAllowableMovement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inputPrecision;
@property (nonatomic, readonly) bool isCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) double maximumEffectProgress;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (nonatomic) bool reachedClickDownThreshold;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic) UIView *view;

+ (bool)prefersCancelsTouchesInView;
+ (bool)requiresForceCapability;

- (void).cxx_destruct;
- (void)_asyncGestureBegan;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)_notifyDelegateOfUpdatedClickDownProgress:(double)arg1 forceAdjustedClickDownDuration:(double)arg2;
- (void)_updateForActiveGestureRecognizer;
- (double)allowableMovement;
- (unsigned long long)behavior;
- (void)cancelInteraction;
- (bool)cancelsTouchesInView;
- (double)clickDownDuration;
- (double)clickTimeoutDuration;
- (bool)clicksUpAutomaticallyAfterTimeout;
- (id)delegate;
- (id)description;
- (double)forceMultiplier;
- (id)gestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)hasExceededAllowableMovement;
- (id)init;
- (unsigned long long)inputPrecision;
- (bool)isCurrentlyAcceleratedByForce;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)maximumEffectProgress;
- (id)primaryGestureRecognizer;
- (bool)reachedClickDownThreshold;
- (void)setAllowableMovement:(double)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setClickDownDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceMultiplier:(double)arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setReachedClickDownThreshold:(bool)arg1;
- (void)setView:(id)arg1;
- (double)touchDuration;
- (id)view;

@end

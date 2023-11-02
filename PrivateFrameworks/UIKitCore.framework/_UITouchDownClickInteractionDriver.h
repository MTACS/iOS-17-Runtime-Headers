
@interface _UITouchDownClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving> {
    double  _allowableMovement;
    bool  _cancelsTouchesInView;
    bool  _clicksUpAutomaticallyAfterTimeout;
    <_UIClickInteractionDriverDelegate> * _delegate;
    _UITouchDownGestureRecognizer * _gesture;
    unsigned long long  _inputPrecision;
    UIView * _view;
}

@property (nonatomic) double allowableMovement;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic) bool cancelsTouchesInView;
@property (nonatomic, readonly) bool clicksUpAutomaticallyAfterTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIClickInteractionDriverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long driverStyle;
@property (nonatomic, readonly) bool hasExceededAllowableMovement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long inputPrecision;
@property (nonatomic, readonly) bool isCurrentlyAcceleratedByForce;
@property (nonatomic, readonly) double maximumEffectProgress;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic) UIView *view;

+ (bool)prefersCancelsTouchesInView;
+ (bool)requiresForceCapability;

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (double)allowableMovement;
- (void)cancelInteraction;
- (bool)cancelsTouchesInView;
- (bool)clicksUpAutomaticallyAfterTimeout;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)hasExceededAllowableMovement;
- (id)init;
- (unsigned long long)inputPrecision;
- (bool)isCurrentlyAcceleratedByForce;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)maximumEffectProgress;
- (id)primaryGestureRecognizer;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (double)touchDuration;
- (id)view;

@end

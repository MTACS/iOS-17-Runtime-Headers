
@interface _UIPressClickInteractionDriver : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDriving> {
    double  _allowableMovement;
    bool  _cancelsTouchesInView;
    <_UIClickInteractionDriverDelegate> * _delegate;
    _UISimplePressGestureRecognizer * _pressGR;
    NSArray * _triggers;
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
@property (nonatomic, retain) _UISimplePressGestureRecognizer *pressGR;
@property (nonatomic, readonly) UIGestureRecognizer *primaryGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchDuration;
@property (nonatomic, retain) NSArray *triggers;
@property (nonatomic) UIView *view;

+ (bool)prefersCancelsTouchesInView;
+ (bool)requiresForceCapability;

- (void).cxx_destruct;
- (void)_addToView:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_removeFromView;
- (double)allowableMovement;
- (void)cancelInteraction;
- (bool)cancelsTouchesInView;
- (bool)clicksUpAutomaticallyAfterTimeout;
- (id)delegate;
- (unsigned long long)driverStyle;
- (bool)hasExceededAllowableMovement;
- (id)init;
- (unsigned long long)inputPrecision;
- (bool)isCurrentlyAcceleratedByForce;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (double)maximumEffectProgress;
- (id)pressGR;
- (id)primaryGestureRecognizer;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPressGR:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)setView:(id)arg1;
- (double)touchDuration;
- (id)triggers;
- (id)view;

@end

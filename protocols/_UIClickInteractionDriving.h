
@protocol _UIClickInteractionDriving <NSObject>

@required

+ (bool)prefersCancelsTouchesInView;
+ (bool)requiresForceCapability;

- (double)allowableMovement;
- (void)cancelInteraction;
- (bool)cancelsTouchesInView;
- (bool)clicksUpAutomaticallyAfterTimeout;
- (<_UIClickInteractionDriverDelegate> *)delegate;
- (bool)hasExceededAllowableMovement;
- (unsigned long long)inputPrecision;
- (bool)isCurrentlyAcceleratedByForce;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (double)maximumEffectProgress;
- (UIGestureRecognizer *)primaryGestureRecognizer;
- (void)setAllowableMovement:(double)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelegate:(id <_UIClickInteractionDriverDelegate>)arg1;
- (void)setView:(UIView *)arg1;
- (double)touchDuration;
- (UIView *)view;

@optional

- (unsigned long long)behavior;
- (unsigned long long)driverStyle;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setDriverStyle:(unsigned long long)arg1;

@end

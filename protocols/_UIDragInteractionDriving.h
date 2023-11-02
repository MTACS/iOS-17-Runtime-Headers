
@protocol _UIDragInteractionDriving <NSObject>

@required

- (bool)additionalTouchesCancelLift;
- (NSArray *)allowedTouchTypes;
- (bool)allowsSimultaneousRecognitionDuringLift;
- (bool)automaticallyAddsFailureRelationships;
- (void)cancel;
- (double)cancellationDelay;
- (bool)cancellationTimerEnabled;
- (double)competingLongPressDelay;
- (bool)competingLongPressOnLift;
- (<_UIDragInteractionDriverDelegate> *)delegate;
- (struct CGPoint { double x1; double x2; })initialLocationInWindow;
- (bool)isActive;
- (bool)isEnabled;
- (bool)isGestureRecognizerForDragInitiation:(UIGestureRecognizer *)arg1;
- (id /* block */)itemUpdater:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UIDragItem *, void*, id, SEL
- (double)liftDelay;
- (double)liftMoveHysteresis;
- (void)setAdditionalTouchesCancelLift:(bool)arg1;
- (void)setAllowedTouchTypes:(NSArray *)arg1;
- (void)setAllowsSimultaneousRecognitionDuringLift:(bool)arg1;
- (void)setAutomaticallyAddsFailureRelationships:(bool)arg1;
- (void)setCancellationDelay:(double)arg1;
- (void)setCancellationTimerEnabled:(bool)arg1;
- (void)setCompetingLongPressDelay:(double)arg1;
- (void)setCompetingLongPressOnLift:(bool)arg1;
- (void)setDelegate:(id <_UIDragInteractionDriverDelegate>)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLiftDelay:(double)arg1;
- (void)setLiftMoveHysteresis:(double)arg1;
- (void)setView:(UIView *)arg1;
- (bool)shouldAnimateLift;
- (UIView *)view;

@optional

- (<UIDragInteractionEffect> *)interactionEffect;

@end

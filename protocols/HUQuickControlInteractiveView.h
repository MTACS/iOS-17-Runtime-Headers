
@protocol HUQuickControlInteractiveView <HUQuickControlControllableView>

@required

- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(UIGestureRecognizer *)arg1;
- (<HUQuickControlViewInteractionDelegate> *)interactionDelegate;
- (bool)isUserInteractionActive;
- (void)setInteractionDelegate:(id <HUQuickControlViewInteractionDelegate>)arg1;

@end

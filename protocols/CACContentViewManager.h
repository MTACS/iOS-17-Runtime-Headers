
@protocol CACContentViewManager

@required

- (void)hide;
- (void)hideWithoutAnimation;
- (bool)isOutOfProcess;
- (bool)isOverlay;
- (bool)isPhysiciallyInteractiveOverlay;
- (bool)isShowing;

@end

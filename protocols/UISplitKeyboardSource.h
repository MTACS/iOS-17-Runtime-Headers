
@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>

@required

- (UIViewController *)_inputViewController;
- (<UIInputViewSetPlacementApplicator> *)applicator;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)finishSplitTransition;
- (bool)isChangingPlacement;
- (double)offsetForSplitTransition;
- (UIInputViewSetPlacement *)placement;
- (struct CGPoint { double x1; double x2; })positionConstraintConstant;
- (void)prepareForSplitTransition;
- (void)removeMatchMoveAnimationIfNeeded;
- (UIView *)scrollTrackingView;
- (void)setInterfaceAutorotationDisabled:(bool)arg1;
- (UIView *)view;

@end

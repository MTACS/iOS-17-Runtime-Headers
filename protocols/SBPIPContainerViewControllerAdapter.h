
@protocol SBPIPContainerViewControllerAdapter <BSInvalidatable>

@required

- (NSString *)bundleIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;
- (UIViewController *)contentViewControllerForContainerViewController:(SBPIPContainerViewController *)arg1;
- (int)processIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;
- (NSString *)scenePersistenceIdentifierForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)setContainerViewController:(SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> *)arg1;

@optional

- (void)containerViewController:(SBPIPContainerViewController *)arg1 didSettleOnStashState:(bool)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 reason:(NSString *)arg3;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateStashProgress:(double)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didUpdateStashState:(bool)arg2 springSettings:(id <UIViewSpringAnimationBehaviorDescribing>)arg3;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 handleDestructionRequestForSceneHandle:(SBDeviceApplicationSceneHandle *)arg2;
- (bool)containerViewController:(SBPIPContainerViewController *)arg1 shouldHandleStashingForTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)containerViewController:(void *)arg1 wantsStashTabHidden:(void *)arg2 left:(void *)arg3 springSettings:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: SBPIPContainerViewController *, bool, bool, <UIViewSpringAnimationBehaviorDescribing> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)containerViewController:(SBPIPContainerViewController *)arg1 willBeginInteractionWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 willUpdateStashState:(bool)arg2;
- (void)containerViewControllerDidBeginEdgeResize:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidEndEdgeResize:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)containerViewControllerDidEndSizeChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerPanGestureDidEnd:(SBPIPContainerViewController *)arg1;
- (bool)containerViewControllerShouldRequireMedusaKeyboard:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStopReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerWillBeginSizeChange:(SBPIPContainerViewController *)arg1 behavior:(int)arg2;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandleForContainerViewController:(SBPIPContainerViewController *)arg1;
- (bool)isStashTabHiddenForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)layoutSubviewsForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)loadSubviewsForContainerViewController:(SBPIPContainerViewController *)arg1;
- (UIView *)morphAnimatorTargetContainerViewForContainerViewController:(SBPIPContainerViewController *)arg1;
- (UIView *)morphAnimatorTargetViewForContainerViewController:(SBPIPContainerViewController *)arg1;
- (NSNumber *)overrideResourcesUsageReductionTimeout;
- (void)setOverrideResourcesUsageReductionTimeout:(NSNumber *)arg1;
- (bool)shouldDisableIdleTimerForContainerViewController:(SBPIPContainerViewController *)arg1;
- (bool)shouldSuppressAssociatedElementsInSystemAperture;
- (void)transitionAnimationDidEndForContainerViewController:(SBPIPContainerViewController *)arg1;
- (void)transitionAnimationWillBeginForContainerViewController:(SBPIPContainerViewController *)arg1;

@end

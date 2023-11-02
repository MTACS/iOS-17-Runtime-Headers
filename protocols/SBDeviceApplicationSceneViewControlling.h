
@protocol SBDeviceApplicationSceneViewControlling <SBApplicationSceneViewControlling, SBSceneLayoutStatusBarAssertionProviding, SBLayoutStateTransitionObserver>

@required

- (NSSet *)backgroundActivitiesToSuppress;
- (UIView<SBApplicationSceneBackgroundView> *)backgroundView;
- (long long)bestHomeAffordanceOrientationForOrientation:(long long)arg1;
- (void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
- (void)containerDidUpdateTraitsParticipant:(TRAParticipant *)arg1;
- (double)currentStatusBarHeight;
- (void)didRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2;
- (long long)homeGrabberDisplayMode;
- (SBHomeGrabberView *)homeGrabberView;
- (long long)leadingStatusBarStyle;
- (SBUIAnimationController *)prepareForContentRotation;
- (UIView *)sceneContentView;
- (SBDeviceApplicationSceneHandle *)sceneHandle;
- (NSString *)sceneMinificationFilter;
- (bool)sceneRendersAsynchronously;
- (bool)sceneResizesHostedContext;
- (void)setBackgroundView:(UIView<SBApplicationSceneBackgroundView> *)arg1;
- (void)setHomeGrabberDisplayMode:(long long)arg1;
- (void)setSceneMinificationFilter:(NSString *)arg1;
- (void)setSceneRendersAsynchronously:(bool)arg1;
- (void)setSceneResizesHostedContext:(bool)arg1;
- (long long)trailingStatusBarStyle;
- (void)willRotateFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 alongsideContainerView:(UIView *)arg3 animated:(bool)arg4;

@end

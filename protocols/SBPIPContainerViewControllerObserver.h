
@protocol SBPIPContainerViewControllerObserver <NSObject>

@optional

- (void)containerViewController:(SBPIPContainerViewController *)arg1 didFinishStartAnimationWithInitialInterfaceOrientation:(long long)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 userDidUpdateStashState:(bool)arg2;
- (void)containerViewControllerDidUpdatePrefersHiddenFromClonedDisplays:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStartReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerStopReducingResourcesUsage:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerUserMayUpdateStashState:(SBPIPContainerViewController *)arg1;

@end

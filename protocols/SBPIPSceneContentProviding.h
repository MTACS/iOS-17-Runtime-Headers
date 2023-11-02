
@protocol SBPIPSceneContentProviding <NSObject>

@required

- (void)containerViewController:(SBPIPContainerViewController *)arg1 didSettleOnStashState:(bool)arg2;
- (bool)containerViewController:(SBPIPContainerViewController *)arg1 shouldHandleStashingForTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)containerViewControllerDidEndSizeChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerWillBeginSizeChange:(SBPIPContainerViewController *)arg1 behavior:(int)arg2;
- (SBDeviceApplicationSceneHandle *)sceneHandle;

@end

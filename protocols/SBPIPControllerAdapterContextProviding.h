
@protocol SBPIPControllerAdapterContextProviding <NSObject>

@required

- (NSArray *)containerViewControllersOnWindowScene:(SBWindowScene *)arg1;
- (void)invalidateIdleTimerBehaviors;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pictureInPictureWindowMarginsOnWindowScene:(SBWindowScene *)arg1;
- (void)prepareContainerViewControllerForHidingContentViewController:(UIViewController *)arg1;
- (void)restoreContentViewController:(void *)arg1 appSceneEntity:(void *)arg2 morphAnimatorConfigurationBlock:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 14: UIViewController *, SBDeviceApplicationSceneEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBPIPMorphAnimatorController *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (double)windowLevelForWindowScene:(SBWindowScene *)arg1;

@end

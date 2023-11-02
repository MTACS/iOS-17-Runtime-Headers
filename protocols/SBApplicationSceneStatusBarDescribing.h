
@protocol SBApplicationSceneStatusBarDescribing <NSObject>

@required

- (NSSet *)backgroundActivitiesToSuppress;
- (SBDeviceApplicationSceneStatusBarBreadcrumbProvider *)breadcrumbProvider;
- (SBDeviceApplicationSceneHandle *)classicApplicationSceneHandleIfExists;
- (long long)defaultStatusBarStyle;
- (_UIStatusBarData *)overlayStatusBarData;
- (FBScene *)sceneToHandleStatusBarTapIfExists;
- (bool)sceneWantsDeviceOrientationEventsEnabled;
- (double)statusBarAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarHidden;
- (long long)statusBarOrientation;
- (NSString *)statusBarSceneIdentifier;
- (long long)statusBarStyle;
- (long long)statusBarStyleForPartWithIdentifier:(NSString *)arg1;

@end

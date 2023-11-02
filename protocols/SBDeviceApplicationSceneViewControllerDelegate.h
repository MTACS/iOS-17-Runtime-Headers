
@protocol SBDeviceApplicationSceneViewControllerDelegate <NSObject>

@required

- (void)applicationSceneViewController:(SBDeviceApplicationSceneViewController *)arg1 statusBarTapped:(UITapGestureRecognizer *)arg2 tapActionType:(long long)arg3;
- (void)applicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(SBDeviceApplicationSceneViewController *)arg1;

@optional

- (bool)applicationSceneViewControllerIsInNonrotatingWindow:(SBDeviceApplicationSceneViewController *)arg1;

@end

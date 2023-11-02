
@protocol SBApplicationSceneStatusBarDescriberProviding <NSObject>

@required

- (void)setStatusBarDelegate:(id <SBDeviceApplicationSceneStatusBarStateObserver>)arg1;
- (<SBDeviceApplicationSceneStatusBarStateObserver> *)statusBarDelegate;
- (<SBApplicationSceneStatusBarDescribing> *)statusBarDescriber;

@end

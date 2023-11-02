
@protocol SBWindowSceneStatusBarAssertionManagerObserver <NSObject>

@optional

- (void)statusBarAssertionManager:(SBWindowSceneStatusBarAssertionManager *)arg1 addStatusBarSettingsAssertion:(SBWindowSceneStatusBarSettingsAssertion *)arg2;
- (void)statusBarAssertionManager:(SBWindowSceneStatusBarAssertionManager *)arg1 removeStatusBarSettingsAssertion:(SBWindowSceneStatusBarSettingsAssertion *)arg2;
- (void)statusBarAssertionManager:(SBWindowSceneStatusBarAssertionManager *)arg1 statusBarSettingsDidChange:(SBStatusBarSettings *)arg2;

@end

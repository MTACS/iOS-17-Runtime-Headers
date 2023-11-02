
@protocol CSTraitAwareAppHostContextProviding <NSObject>

@required

- (NSString *)hostedAppBundleIdentifier;
- (bool)hostedAppShouldHideHomeGrabberView;

@optional

- (void)appendToHostedAppSceneSettings:(UIMutableApplicationSceneSettings *)arg1;
- (bool)hostedAppShouldDeactivateAfterDisappearance;
- (bool)hostedAppShouldInvalidateUponDeactivation;
- (bool)hostedAppShouldReactivateUponDestruction;

@end

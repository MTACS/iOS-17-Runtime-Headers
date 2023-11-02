
@protocol HUAppleMusicAccountModuleControllerDelegate <NSObject>

@required

- (void)appleMusicModuleController:(HUAppleMusicAccountModuleController *)arg1 willPresentContext:(AKAppleIDAuthenticationInAppContext *)arg2 account:(ACAccount *)arg3;
- (void)appleMusicModuleControllerDidUpdateAuthenticationState:(HUAppleMusicAccountModuleController *)arg1;
- (void)appleMusicModuleControllerPresentSignInFlow:(HUAppleMusicAccountModuleController *)arg1;

@end

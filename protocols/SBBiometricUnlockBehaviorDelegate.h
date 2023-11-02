
@protocol SBBiometricUnlockBehaviorDelegate <NSObject>

@required

- (bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsFeedback:(SBAuthenticationFeedback *)arg2;
- (bool)biometricUnlockBehavior:(id <SBBiometricUnlockBehavior>)arg1 requestsUnlock:(SBLockScreenUnlockRequest *)arg2 withFeedback:(SBAuthenticationFeedback *)arg3;

@end


@protocol SBLockScreenBiometricAuthenticationCoordinatorDelegate <NSObject>

@required

- (void)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 handleIdentityMatchSuccess:(bool)arg2;
- (bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsAuthenticationFeedback:(SBAuthenticationFeedback *)arg2;
- (bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsUnlockWithIntent:(int)arg2;
- (bool)biometricAuthenticationCoordinatorShouldWaitToInvalidateMatchingAssertion:(SBLockScreenBiometricAuthenticationCoordinator *)arg1;

@end


@protocol SBUIPoseidonContainerViewControllerLockStatusProvider <NSObject>

@required

- (bool)hasBiometricAuthenticationCapabilityEnabled;
- (bool)isBiometricLockedOut;

@end

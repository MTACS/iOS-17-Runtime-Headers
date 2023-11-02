
@protocol SBUIProudLockContainerViewControllerLockStatusProvider <NSObject>

@required

- (bool)hasPasscodeSet;
- (bool)isBiometricLockedOut;

@end

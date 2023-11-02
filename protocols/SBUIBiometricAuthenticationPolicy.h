
@protocol SBUIBiometricAuthenticationPolicy <NSObject>

@required

- (bool)shouldRelockAfterBioUnlock;

@end

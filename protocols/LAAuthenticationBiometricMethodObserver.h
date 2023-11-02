
@protocol LAAuthenticationBiometricMethodObserver <LAAuthenticationMethodObserver>

@optional

- (void)authenticationBiometricsMethod:(LAAuthenticationBiometricMethod *)arg1 didReceiveFeedback:(long long)arg2;
- (void)authenticationBiometricsMethodDidReceiveNoMatch:(LAAuthenticationBiometricMethod *)arg1;

@end

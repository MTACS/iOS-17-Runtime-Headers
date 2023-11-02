
@protocol SBBiometricUnlockBehavior <BSDescriptionProviding>

@required

- (<SBBiometricUnlockBehaviorDelegate> *)biometricUnlockBehaviorDelegate;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)setBiometricUnlockBehaviorDelegate:(id <SBBiometricUnlockBehaviorDelegate>)arg1;

@end

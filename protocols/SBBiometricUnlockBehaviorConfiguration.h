
@protocol SBBiometricUnlockBehaviorConfiguration <NSObject>

@required

- (<SBBiometricUnlockBehaviorConfigurationDelegate> *)delegate;
- (<SBBiometricUnlockBehavior> *)newBehaviorForCurrentConfiguration;
- (void)setDelegate:(id <SBBiometricUnlockBehaviorConfigurationDelegate>)arg1;

@end

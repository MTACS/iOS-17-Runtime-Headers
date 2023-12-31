
@protocol SBUIBiometricResourceObserver <NSObject>

@optional

- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingAllowedDidChange:(bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 matchingEnabledDidChange:(bool)arg2;
- (void)biometricResource:(id <SBUIBiometricResource>)arg1 observeEvent:(unsigned long long)arg2;

@end

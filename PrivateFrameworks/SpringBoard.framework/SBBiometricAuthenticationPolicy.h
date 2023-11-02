
@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy> {
    <SBFLockOutStatusProvider> * _lockOutStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLockOutProvider:(id)arg1;
- (bool)shouldRelockAfterBioUnlock;

@end

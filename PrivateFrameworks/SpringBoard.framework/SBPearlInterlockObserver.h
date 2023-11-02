
@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver> {
    <SBUIBiometricResource> * _biometricResource;
    bool  _didSuppressFire;
    bool  _fired;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForLockout;
- (void)_fire;
- (void)activate;
- (void)biometricResource:(id)arg1 matchingEnabledDidChange:(bool)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)deactivate;
- (id)initWithBiometricResource:(id)arg1;

@end

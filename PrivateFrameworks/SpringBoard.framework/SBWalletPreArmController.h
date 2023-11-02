
@interface SBWalletPreArmController : NSObject {
    <SBUIBiometricResource> * _biometricResource;
    NSHashTable * _disabledPreArmAssertions;
    NSMutableDictionary * _disabledPreArmAssertionsByType;
    PKPassLibrary * _passLibrary;
    long long  _triggerSource;
}

@property (getter=isPreArmAllowed, nonatomic, readonly) bool preArmAllowed;
@property (getter=isPreArmAvailable, nonatomic, readonly) bool preArmAvailable;
@property (getter=isPreArmExternallySuppressed, nonatomic, readonly) bool preArmExternallySuppressed;
@property (getter=isPreArmSuppressed, nonatomic, readonly) bool preArmSuppressed;
@property (getter=isPreArmTriggeredByHomeButtonDoublePress, nonatomic, readonly) bool preArmTriggeredByHomeButtonDoublePress;
@property (getter=isPreArmTriggeredByLockButtonDoublePress, nonatomic, readonly) bool preArmTriggeredByLockButtonDoublePress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_computeTriggerSource;
- (long long)_contactlessInterfaceSourceForTriggerSource:(long long)arg1;
- (id)acquireSuppressPreArmAssertionForReason:(id)arg1;
- (id)acquireSuppressPreArmAssertionOfType:(long long)arg1 forReason:(id)arg2;
- (id)init;
- (id)initWithPassLibrary:(id)arg1 biometricResource:(id)arg2;
- (bool)isPreArmAllowed;
- (bool)isPreArmAvailable;
- (bool)isPreArmExternallySuppressed;
- (bool)isPreArmSuppressed;
- (bool)isPreArmTriggeredByHomeButtonDoublePress;
- (bool)isPreArmTriggeredByLockButtonDoublePress;
- (void)presentPreArmInterfaceForTriggerSource:(long long)arg1 completion:(id /* block */)arg2;

@end

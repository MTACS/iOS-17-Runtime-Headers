
@interface CIDVUIBiometricReplacementFlowManager : NSObject {
    _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager * _biometricReplacementFlowManager;
}

@property (nonatomic, retain) _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager *biometricReplacementFlowManager;

- (void).cxx_destruct;
- (void)beginBiometricReplacement:(id /* block */)arg1;
- (void)beginBiometricReplacementForWatch:(id /* block */)arg1;
- (void)beginBiometricReplacementWithAuthenticationHandler:(id /* block */)arg1 andCompletion:(id /* block */)arg2;
- (id)biometricReplacementFlowManager;
- (id)init;
- (void)setBiometricReplacementFlowManager:(id)arg1;

@end

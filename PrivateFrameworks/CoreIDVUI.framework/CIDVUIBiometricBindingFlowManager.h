
@interface CIDVUIBiometricBindingFlowManager : UIViewController {
    _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager * _bioBindingFlowManager;
}

@property (nonatomic, retain) _TtC9CoreIDVUI34CIDVUIInternalBiometricFlowManager *bioBindingFlowManager;

- (void).cxx_destruct;
- (id)bioBindingFlowManager;
- (void)deleteBoundACLWithCompletion:(id /* block */)arg1;
- (void)evaluateBoundACL:(id /* block */)arg1;
- (void)fetchBiometricBindingDetails:(id /* block */)arg1;
- (id)init;
- (void)setBioBindingFlowManager:(id)arg1;

@end

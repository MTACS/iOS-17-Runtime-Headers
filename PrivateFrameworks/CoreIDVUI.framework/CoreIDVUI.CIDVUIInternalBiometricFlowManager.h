
@interface CoreIDVUI.CIDVUIInternalBiometricFlowManager : NSObject {
    void bioBindingController;
    void context;
    void viewController;
}

- (void).cxx_destruct;
- (void)deleteBoundACLWithCompletion:(id /* block */)arg1;
- (void)evaluateBoundACLWithCompletion:(id /* block */)arg1;
- (void)fetchBiometricBindingDetailsWithCompletion:(id /* block */)arg1;
- (id)init;

@end

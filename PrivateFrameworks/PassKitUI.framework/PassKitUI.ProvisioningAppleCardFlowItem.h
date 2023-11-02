
@interface PassKitUI.ProvisioningAppleCardFlowItem : NSObject <PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol> {
    void _hasRemainingCredentialsToProvision;
    void accountFlowController;
    void context;
    void credential;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)init;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end


@interface PassKitUI.ProvisioningAutoReloadCompleteFlowItem : NSObject <PKPaymentAutoReloadSetupCompleteViewControllerDelegate> {
    void amount;
    void controller;
    void delegate;
    void identifier;
    void provisionedPasses;
    void threshold;
}

- (void).cxx_destruct;
- (void)autoReloadSetupCompleteViewControllerDidComplete;
- (id)init;

@end

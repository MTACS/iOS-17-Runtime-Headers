
@interface PassKitUI.ProvisioningAppleBalanceCredentialFlowItem : NSObject <PKPaymentProvisioningViewControllerDelegate> {
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
    void setupController;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)provisioningViewController:(id)arg1 didFinishWithSuccess:(bool)arg2;

@end

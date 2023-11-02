
@interface PassKitUI.ProvisioningAppleBalanceHeroFlowItem : NSObject <PKAppleBalanceExplanationViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    void context;
    void delegate;
    void identifier;
    void setupController;
}

- (void).cxx_destruct;
- (void)appleBalanceExplanationViewControllerDidSelectContinue:(id)arg1;
- (id)init;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end

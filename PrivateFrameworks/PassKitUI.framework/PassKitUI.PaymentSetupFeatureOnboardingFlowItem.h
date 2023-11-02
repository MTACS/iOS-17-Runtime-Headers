
@interface PassKitUI.PaymentSetupFeatureOnboardingFlowItem : NSObject <PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol> {
    void context;
    void delegate;
    void identifier;
    void payLaterSetupFlowController;
    void product;
    void style;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)nextViewControllerWithCompletion:(id /* block */)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end

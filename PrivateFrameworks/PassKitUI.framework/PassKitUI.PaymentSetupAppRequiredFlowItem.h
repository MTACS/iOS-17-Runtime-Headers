
@interface PassKitUI.PaymentSetupAppRequiredFlowItem : NSObject <PKPaymentSetupViewControllerDelegate> {
    void context;
    void delegate;
    void identifier;
    void linkedApplication;
    void product;
}

- (void).cxx_destruct;
- (id)init;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;

@end


@interface PassKitUI.PaymentSetupProductTypeFlowItem : NSObject <PKPaymentSetupChooseProductTypeViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void product;
    void viewController;
}

- (void).cxx_destruct;
- (void)chooseProductTypeViewController:(id)arg1 didPerformPurchaseWithCredential:(id)arg2;
- (void)chooseProductTypeViewController:(id)arg1 didSelectServiceProducts:(id)arg2;
- (void)chooseProductTypeViewControllerDidSelectManualEntry:(id)arg1;
- (void)chooseProductTypeViewControllerDidTerminate:(id)arg1;
- (id)init;

@end

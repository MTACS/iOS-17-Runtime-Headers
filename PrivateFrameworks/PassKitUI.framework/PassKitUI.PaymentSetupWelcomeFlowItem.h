
@interface PassKitUI.PaymentSetupWelcomeFlowItem : NSObject <PKPaymentSetupWelcomeViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)welcomeViewController:(id)arg1 didSelectCategory:(id)arg2 products:(id)arg3;
- (void)welcomeViewControllerDidSelectCardsOnFile:(id)arg1;
- (void)welcomeViewControllerDidSelectManualEntry:(id)arg1;

@end

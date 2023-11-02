
@interface PassKitUI.PaymentSetupAppDisambiguationFlowItem : NSObject <PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void linkedApplication;
    void product;
}

- (void).cxx_destruct;
- (void)bankAppDisambiguationViewControllerDidManualEntry:(id)arg1;
- (void)bankAppDisambiguationViewControllerDidSelectApp:(id)arg1;
- (id)init;

@end

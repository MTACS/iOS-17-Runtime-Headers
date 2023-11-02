
@interface PassKitUI.PaymentSetupCredentialsFlowItem : NSObject <PKPaymentSetupCredentialsViewControllerFlowDelegate> {
    void _privacyDisclosures;
    void allowManualEntry;
    void context;
    void credentials;
    void delegate;
    void identifier;
    void product;
}

- (void).cxx_destruct;
- (void)credentialsViewController:(id)arg1 didSelectCredentials:(id)arg2;
- (void)credentialsViewControllerDidSelectManualEntry:(id)arg1;
- (void)credentialsViewControllerDidSelectSecondaryManualEntry:(id)arg1;
- (void)credentialsViewControllerDidTerminate:(id)arg1;
- (id)init;

@end

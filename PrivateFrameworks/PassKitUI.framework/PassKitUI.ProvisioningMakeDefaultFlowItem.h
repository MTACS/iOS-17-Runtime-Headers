
@interface PassKitUI.ProvisioningMakeDefaultFlowItem : NSObject <PKPaymentPassMakeDefaultViewControllerDelegate> {
    void _isCardsOnFileProvisioning;
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)init;
- (void)paymentPassMakeDefaultViewControllerDidFinish:(id)arg1;

@end

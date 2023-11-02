
@interface PassKitUI.ProvisioningHeroFlowItem : NSObject <PKExplanationViewDelegate, PKPaymentSetupHeroViewControllerFlowDelegate> {
    void _hasSeenHeroScreen;
    void _privacyDisclosures;
    void allowSecondaryManualEntry;
    void context;
    void delegate;
    void identifier;
    void product;
    void style;
}

- (void).cxx_destruct;
- (void)explanationViewDidSelectBodyButton:(id)arg1;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (void)heroViewControllerDidRequestTransferBalance:(id)arg1;
- (id)init;

@end

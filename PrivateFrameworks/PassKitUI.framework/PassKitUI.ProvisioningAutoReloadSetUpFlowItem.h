
@interface PassKitUI.ProvisioningAutoReloadSetUpFlowItem : NSObject <PKPaymentAutoReloadSetupControllerDelegate> {
    void _isCardsOnFileProvisioning;
    void _isManualProvisioning;
    void context;
    void controller;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (void)autoReloadSetupControllerDidCancel:(id)arg1;
- (void)autoReloadSetupControllerDidCompleteWithAmount:(id)arg1 threshold:(id)arg2;
- (id)init;

@end

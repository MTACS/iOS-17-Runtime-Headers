
@interface PassKitUI.ProvisioningVerificationCompletionFlowItem : NSObject <PKPaymentSetupVerificationCompletionViewControllerFlowItemDelegate> {
    void allowVerificationMethodSelection;
    void context;
    void delegate;
    void identifier;
    void managingSection;
    void verificationController;
}

- (void).cxx_destruct;
- (id)init;
- (void)showVerificationMethodsForVerificationCompletionViewController:(id)arg1;
- (void)verificationCompletionViewControllerDidFinish:(id)arg1;

@end

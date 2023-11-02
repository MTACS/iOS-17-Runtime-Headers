
@interface PassKitUI.ProvisioningVerificationMethodsFlowItem : NSObject <PKPaymentVerificationMethodsViewControllerFlowItemDelegate> {
    void context;
    void delegate;
    void identifier;
    void managingSection;
    void verificationController;
}

- (void).cxx_destruct;
- (id)init;
- (void)showExternalVerificationForVerificationMethodsViewController:(id)arg1;
- (void)showVerificationCompletionForVerificationMethodsViewController:(id)arg1;
- (void)showVerificationMethodsForVerificationMethodsViewController:(id)arg1;
- (void)verificationMethodsViewControllerDidFinish:(id)arg1;

@end

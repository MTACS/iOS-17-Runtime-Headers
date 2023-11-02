
@interface PassKitUI.ProvisioningCredentialFlowItem : NSObject <PKPaymentProvisioningViewControllerDelegate> {
    void _hasRemainingCredentialsToProvision;
    void _isCardsOnFileProvisioning;
    void allowManualEntry;
    void context;
    void credential;
    void delegate;
    void identifier;
    void isShowingViewController;
    void previouslyAcceptedTerms;
    void product;
    void provisionedPasses;
    void viewController;
}

- (void).cxx_destruct;
- (id)init;
- (void)provisioningViewController:(id)arg1 didFinishWithSuccess:(bool)arg2;
- (void)provisioningViewControllerDidSelectManualEntry:(id)arg1;

@end

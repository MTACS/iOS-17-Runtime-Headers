
@interface PassKitUI.ProvisioningUICoordinator : NSObject <PKPasscodeUpgradeFlowRenderer, PKPaymentCredentialProvisioningViewControllerCoordinator, PKPaymentSetupDisambiguationViewControllerDelegate, RemoteUIControllerDelegate> {
    void cameraCaptureObjects;
    void composer;
    void configuration;
    void context;
    void credentialIndex;
    void delegate;
    void fieldsModel;
    void passcodeController;
    void previouslyAcceptedTerms;
    void provisionedPasses;
    void provisioningError;
    void renderer;
    void skipRequirements;
    void termsUIController;
    void viewController;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)continueWithFieldModel:(id)arg1;
- (void)dealloc;
- (void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2;
- (void)disambiguationViewControllerSetUpLater:(id)arg1;
- (id)init;
- (id)provisionedPass;
- (void)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)topViewController;

@end

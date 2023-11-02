
@interface PassKitUI.ProvisioningInAppHeroFlowItem : NSObject <PKExplanationViewDelegate> {
    void _hasSeenHeroScreen;
    void _privacyDisclosures;
    void configuration;
    void context;
    void delegate;
    void identifier;
}

- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)init;

@end


@interface PassKitUI.ProvisioningPushProvAddPassFlowItem : NSObject <PKShareableCredentialProvisioningViewControllerCoordinator> {
    void configuration;
    void context;
    void coordinator;
    void delegate;
    void identifier;
    void managingSection;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)continueProvisioning;
- (id)init;
- (void)shareableViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)startProvisioningWithConfiguration:(id)arg1;
- (void)startProvisioningWithCredentials:(id)arg1;

@end

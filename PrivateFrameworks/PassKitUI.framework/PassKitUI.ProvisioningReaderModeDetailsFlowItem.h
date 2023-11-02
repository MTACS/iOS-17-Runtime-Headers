
@interface PassKitUI.ProvisioningReaderModeDetailsFlowItem : NSObject <PKPaymentProvisioningViewControllerDelegate> {
    void _isManualProvisioning;
    void context;
    void delegate;
    void identifier;
    void product;
}

- (void).cxx_destruct;
- (id)init;
- (void)provisioningViewController:(id)arg1 didFinishWithSuccess:(bool)arg2;

@end

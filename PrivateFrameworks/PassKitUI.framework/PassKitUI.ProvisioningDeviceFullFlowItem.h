
@interface PassKitUI.ProvisioningDeviceFullFlowItem : NSObject <PKPaymentSelectPassesViewControllerDelegate> {
    void configuration;
    void context;
    void delegate;
    void didComplete;
    void dismissalConfiguration;
    void identifier;
}

- (void).cxx_destruct;
- (id)init;
- (void)selectPassesViewController:(id)arg1 didSelectPasses:(id)arg2 completion:(id /* block */)arg3;
- (void)selectPassesViewControllerDidTapBackButton:(id)arg1;

@end

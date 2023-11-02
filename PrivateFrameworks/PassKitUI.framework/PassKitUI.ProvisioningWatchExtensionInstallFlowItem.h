
@interface PassKitUI.ProvisioningWatchExtensionInstallFlowItem : NSObject <PKWatchExtensionInstallViewControllerFlowDelegate> {
    void context;
    void delegate;
    void identifier;
    void provisionedPasses;
}

- (void).cxx_destruct;
- (id)init;
- (void)watchExtensionInstallViewControllerDidFinish:(id)arg1;

@end

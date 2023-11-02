
@interface ICQRemoteExtensionHost : NSObject <iCloudQuotaUI.HostXPCProtocol> {
    void flowCompletion;
    void presentingVC;
}

- (void).cxx_destruct;
- (void)dismissViewControllerWithError:(id)arg1;
- (id)init;
- (void)presentRemoteViewControllerWithContext:(id)arg1 presentingViewController:(id)arg2 completion:(id /* block */)arg3;

@end

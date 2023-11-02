
@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController {
    SFPasswordRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> * _serviceProxy;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_connectToServiceWithCompletion:(id /* block */)arg1;
- (id)_remoteViewController;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (void)authenticateToPresentInPopover:(bool)arg1 completion:(id /* block */)arg2;
- (void)authenticateToPresentInPopover:(bool)arg1 savedAccountContext:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteViewController:(id)arg1 fillPassword:(id)arg2;
- (void)remoteViewController:(id)arg1 fillUsername:(id)arg2;
- (void)remoteViewController:(id)arg1 fillVerificationCode:(id)arg2;
- (void)remoteViewController:(id)arg1 selectedCredential:(id)arg2;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)setPageID:(id)arg1 frameID:(id)arg2 credentialType:(id)arg3;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setSystemAutoFillDocumentTraits:(id)arg1;
- (void)setWebViewURL:(id)arg1;
- (void)viewDidLoad;

@end

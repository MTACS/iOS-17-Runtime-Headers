
@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate> {
    SFExternalPasswordCredentialRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFExternalPasswordCredentialViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoFillWithExternalCredential:(id)arg1 pageID:(id)arg2 frameID:(id)arg3;
- (bool)_canShowWhileLocked;
- (id)_connectToServiceWithCompletion:(id /* block */)arg1;
- (id)_remoteViewController;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (void)autoFillWithExternalCredential:(id)arg1;
- (void)autoFillWithExternalCredential:(id)arg1 pageID:(id)arg2 frameID:(id)arg3;
- (void)dealloc;
- (void)getCredentialForExternalCredential:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)arg1;
- (void)viewDidLoad;

@end

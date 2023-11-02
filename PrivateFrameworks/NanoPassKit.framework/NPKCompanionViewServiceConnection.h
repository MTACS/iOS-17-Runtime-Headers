
@interface NPKCompanionViewServiceConnection : NSObject <NPKCompanionViewServiceConnectionClientProtocol, PKXPCServiceDelegate> {
    <NPKCompanionViewServiceConnectionDelegate> * _delegate;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKCompanionViewServiceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleCompanionItemSelectionRequestCancelledForRequestIdentifier:(id)arg1;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)arg1 serviceProviderData:(id)arg2 forRequestIdentifier:(id)arg3;
- (void)handleCompanionValueEntryCancelledForRequestIdentifier:(id)arg1;
- (void)handleCompanionValueEntryFinishedWithCurrencyAmount:(id)arg1 forRequestIdentifier:(id)arg2;
- (id)init;
- (void)presentRemotePassItemSelectionViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)presentRemotePassValueEntryViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)serviceResumed;
- (void)serviceSuspended;
- (void)setDelegate:(id)arg1;

@end

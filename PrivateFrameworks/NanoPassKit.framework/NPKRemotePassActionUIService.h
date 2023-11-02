
@interface NPKRemotePassActionUIService : NSObject <NPKCompanionViewServiceConnectionDelegate> {
    NPKCompanionViewServiceConnection * _connection;
    <NPKRemotePassActionUIServiceDelegate> * _delegate;
}

@property (nonatomic, retain) NPKCompanionViewServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKRemotePassActionUIServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)companionViewServiceConnection:(id)arg1 handleCompanionItemSelectionDidCancelForRequestIdentifier:(id)arg2;
- (void)companionViewServiceConnection:(id)arg1 handleCompanionItemSelectionDidFinishWithRenewalAmount:(id)arg2 serviceProviderData:(id)arg3 forRequestWithIdentifier:(id)arg4;
- (void)companionViewServiceConnection:(id)arg1 handleCompanionValueEntryDidCancelForRequestIdentifier:(id)arg2;
- (void)companionViewServiceConnection:(id)arg1 handleCompanionValueEntryDidFinishWithCurrencyAmount:(id)arg2 forRequestWithIdentifier:(id)arg3;
- (id)connection;
- (id)delegate;
- (void)presentRemotePassItemSelectionViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)presentRemotePassValueEntryViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

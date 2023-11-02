
@interface NPKCompanionViewServiceConnectionServerService : NSObject <NPKCompanionViewServiceConnectionServerDelegate, NSXPCListenerDelegate> {
    NSMutableSet * _connectionServers;
    <NPKCompanionViewServiceConnectionServerServiceDelegate> * _delegate;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKCompanionViewServiceConnectionServerServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_addServer:(id)arg1;
- (void)_removeServer:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleCompanionItemSelectionRequestDidCancelForRequestIdentifier:(id)arg1;
- (void)handleCompanionItemSelectionRequestFinishedWithRenewalAmount:(id)arg1 serviceProviderData:(id)arg2 forRequestIdentifier:(id)arg3;
- (void)handleCompanionValueEntryRequestDidCancelForRequestIdentifier:(id)arg1;
- (void)handleCompanionValueEntryRequestFinishedWithCurrencyAmount:(id)arg1 forRequestIdentifier:(id)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewServiceConnectionServer:(id)arg1 didRequestPresentRemotePassItemSelectionViewControllerForRequest:(id)arg2 contact:(id)arg3 completion:(id /* block */)arg4;
- (void)viewServiceConnectionServer:(id)arg1 didRequestPresentRemotePassValueEntryViewControllerForRequest:(id)arg2 contact:(id)arg3 completion:(id /* block */)arg4;

@end

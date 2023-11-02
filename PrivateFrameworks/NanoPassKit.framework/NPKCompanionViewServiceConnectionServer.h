
@interface NPKCompanionViewServiceConnectionServer : PDXPCService <NPKCompanionViewServiceConnectionServerProtocol> {
    <NPKCompanionViewServiceConnectionServerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKCompanionViewServiceConnectionServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_checkCompanionViewServiceConnectionEntitlement;
- (id)delegate;
- (void)presentRemotePassItemSelectionViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)presentRemotePassValueEntryViewControllerForRequest:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end

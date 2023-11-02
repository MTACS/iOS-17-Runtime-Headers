
@interface SSDittoRemoteConnection : NSObject {
    FBSOpenApplicationService * _openApplicationService;
}

- (void).cxx_destruct;
- (void)_sendAction:(id)arg1;
- (void)_sendAction:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)preheatDittoProcess;
- (void)sendDittoProcessDocumentUpdate:(id)arg1;
- (void)sendDittoProcessEnvironmentDescription:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDittoProcessImageIdentifierUpdate:(id)arg1;
- (void)sendDittoProcessMetadataUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)sendDittoProcessPreheatRequestWithPresentationMode:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end

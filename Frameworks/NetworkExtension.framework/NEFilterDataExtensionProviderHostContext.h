
@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderHostProtocol, NEFilterDataExtensionProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)applySettings:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchProviderConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;

@end

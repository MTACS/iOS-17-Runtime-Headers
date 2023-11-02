
@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface> {
    PKIssuerProvisioningExtensionHandler * _handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKIssuerProvisioningExtensionHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)connect;
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)handler;
- (void)passEntriesWithCompletion:(id /* block */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remotePassEntriesWithCompletion:(id /* block */)arg1;
- (void)setHandler:(id)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end

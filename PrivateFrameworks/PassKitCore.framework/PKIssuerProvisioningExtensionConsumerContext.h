
@interface PKIssuerProvisioningExtensionConsumerContext : NSExtensionContext <PKIssuerProvisioningExtensionConsumerContextExportedInterface> {
    NSMutableArray * _blocksQueuedForConnected;
    bool  _connected;
    bool  _entitled;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _teamID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (void)passEntriesWithCompletion:(id /* block */)arg1;
- (void)performWhenConnected:(id /* block */)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remotePassEntriesWithCompletion:(id /* block */)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end

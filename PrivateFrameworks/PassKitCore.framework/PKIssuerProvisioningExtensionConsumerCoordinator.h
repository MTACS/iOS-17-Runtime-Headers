
@interface PKIssuerProvisioningExtensionConsumerCoordinator : NSObject <PKInvalidatable> {
    PKIssuerProvisioningExtensionConsumerContext * _context;
    NSExtension * _extension;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <NSCopying> * _requestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

+ (id)beginWithExtension:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)_initWithExtension:(id)arg1;
- (void)_performWhenConnected:(id /* block */)arg1;
- (void)dealloc;
- (id)extension;
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;
- (void)passEntriesWithCompletion:(id /* block */)arg1;
- (void)remotePassEntriesWithCompletion:(id /* block */)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;

@end

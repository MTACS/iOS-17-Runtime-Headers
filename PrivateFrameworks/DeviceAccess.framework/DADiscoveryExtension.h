
@interface DADiscoveryExtension : NSObject <DADiscoveryExtensionXPCProtocolHost> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    _EXExtensionIdentity * _ekExtension;
    id /* block */  _invalidationHandler;
    DADiscovery * _parent;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) _EXExtensionIdentity *ekExtension;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) DADiscovery *parent;

- (void).cxx_destruct;
- (void)_activate;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (id)description;
- (id)dispatchQueue;
- (id)ekExtension;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)parent;
- (void)reportEvent:(id)arg1;
- (void)reportEventToExtension:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEkExtension:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setParent:(id)arg1;

@end

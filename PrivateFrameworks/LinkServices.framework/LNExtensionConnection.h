
@interface LNExtensionConnection : LNConnection {
    _EXExtensionProcess * _extensionProcess;
    NSXPCConnection * _mediatorXPCConnection;
}

@property (nonatomic, retain) _EXExtensionProcess *extensionProcess;
@property (nonatomic, retain) NSXPCConnection *mediatorXPCConnection;

- (void).cxx_destruct;
- (void)connectDirectlyWithOptions:(id)arg1;
- (void)connectUsingListenerEndpoint:(id)arg1;
- (void)connectUsingMediatorWithOptions:(id)arg1;
- (void)connectWithOptions:(id)arg1;
- (void)dealloc;
- (id)extensionIdentityWithExtensionPointIdentifier:(id)arg1 error:(id*)arg2;
- (id)extensionProcess;
- (void)invalidateExtensionProcess;
- (void)invalidateMediatorXPCConnection;
- (id)mediatorXPCConnection;
- (bool)refreshWithOptions:(id)arg1;
- (void)setExtensionProcess:(id)arg1;
- (void)setMediatorXPCConnection:(id)arg1;

@end


@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol> {
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)_resyncState;
- (void)didEnterFieldForPassesWithUniqueIDs:(id)arg1;
- (void)handleDelegatedDoublePressEvent;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)invalidate;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end

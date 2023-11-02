
@interface HKSPXPCConnectionListener : NSObject <BSDescriptionProviding, NSXPCListenerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    NSMutableSet * _connectedClientSet;
    HKSPXPCConnectionInfo * _connectionInfo;
    NSXPCListener * _connectionListener;
    <HKSPXPCConnectionListenerDelegate> * _delegate;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } clientLock;
@property (nonatomic, readonly) NSMutableSet *connectedClientSet;
@property (nonatomic, readonly) NSArray *connectedClients;
@property (nonatomic, readonly) HKSPXPCConnectionInfo *connectionInfo;
@property (nonatomic, readonly) NSXPCListener *connectionListener;
@property (nonatomic, readonly) HKSPXPCClient *currentClient;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKSPXPCConnectionListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)listenerWithConnectionInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_clientIdentifierProviderForClientLink:(id)arg1;
- (id)_clientWithConnection:(id)arg1 clientLink:(id)arg2;
- (id)_currentClientForConnection:(id)arg1;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_lock_logConnectedClients;
- (void)_withLock:(id /* block */)arg1;
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })clientLock;
- (id)connectedClientSet;
- (id)connectedClients;
- (id)connectedClientsWithPID:(int)arg1;
- (id)connectionInfo;
- (id)connectionListener;
- (id)currentClient;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithConnectionInfo:(id)arg1;
- (id)initWithConnectionInfo:(id)arg1 connectionListener:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)performRemoteBlock:(id /* block */)arg1 onClient:(id)arg2;
- (void)performRemoteBlockOnClients:(id /* block */)arg1;
- (void)performRemoteBlockOnClients:(id /* block */)arg1 passingTest:(id /* block */)arg2;
- (void)removeClientConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startListening;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

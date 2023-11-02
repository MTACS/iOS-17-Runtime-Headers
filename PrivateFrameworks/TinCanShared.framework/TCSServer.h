
@interface TCSServer : NSObject <NSXPCListenerDelegate, TCSServerXPC> {
    NSMutableArray * _connections;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionsLock;
    <TCSServerXPC> * _delegate;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TCSServerXPC> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_enumerateConnectionsWithBlock:(id /* block */)arg1;
- (void)_removeConnection:(id)arg1;
- (void)callConnected:(id)arg1;
- (void)callStatusChanged:(id)arg1;
- (id)delegate;
- (void)disconnectCall:(id)arg1;
- (void)ensureUplinkMuted;
- (void)getCall:(id /* block */)arg1;
- (void)getLogEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasValidConnection;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)queryIsTinCannable:(id)arg1;
- (void)remoteUplinkMuteChanged:(id)arg1;
- (void)sessionViewControllerViewDidAppear;
- (void)setDelegate:(id)arg1;
- (void)setUplinkMuted:(bool)arg1 for:(id)arg2 completion:(id /* block */)arg3;

@end

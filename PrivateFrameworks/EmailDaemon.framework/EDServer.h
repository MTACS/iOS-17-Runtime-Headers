
@interface EDServer : NSObject <EDReconciliationQueryProvider, EDServerRemoteClientsProvider, EFLoggable, NSXPCListenerDelegate> {
    EFLocked * _connectedClients;
    EDDaemonInterfaceFactory * _daemonInterfaceFactory;
    NSXPCListener * _listener;
}

@property (nonatomic, readonly) EFLocked *connectedClients;
@property (nonatomic, retain) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, readonly, copy) NSArray *remoteClients;
@property (nonatomic, readonly) NSXPCListenerEndpoint *serverXPCEndpoint;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)addRemoteClient:(id)arg1;
- (id)connectedClients;
- (id)daemonInterfaceFactory;
- (id)initWithDaemonInterfaceFactory:(id)arg1;
- (id)initWithDaemonInterfaceFactory:(id)arg1 listener:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)messageReconciliationQueries;
- (id)remoteClients;
- (void)removeRemoteClient:(id)arg1;
- (id)serverXPCEndpoint;
- (void)setDaemonInterfaceFactory:(id)arg1;
- (void)setListener:(id)arg1;
- (void)start;
- (void)test_tearDown;
- (id)threadReconciliationQueries;

@end

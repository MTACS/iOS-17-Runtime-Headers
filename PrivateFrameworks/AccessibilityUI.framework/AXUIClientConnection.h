
@interface AXUIClientConnection : NSObject {
    bool  _connected;
    AXAccessQueue * _connectionAccessQueue;
    NSMutableDictionary * _registeredClients;
    AXAccessQueue * _registeredClientsAccessQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serverConnectionLock;
    BSServiceConnection<BSServiceConnectionClient> * _serviceConnection;
    NSObject<OS_dispatch_queue> * _serviceConnectionQueue;
    NSMutableArray * _serviceRequests;
    NSObject<OS_dispatch_queue> * _stateObserverQueue;
    NSHashTable * _stateObservers;
    NSObject<OS_xpc_object> * _xpcConnection;
}

@property (getter=isConnected, nonatomic) bool connected;
@property (nonatomic, retain) AXAccessQueue *connectionAccessQueue;
@property (nonatomic, retain) NSMutableDictionary *registeredClients;
@property (nonatomic, retain) AXAccessQueue *registeredClientsAccessQueue;
@property (nonatomic, retain) BSServiceConnection<BSServiceConnectionClient> *serviceConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serviceConnectionQueue;
@property (nonatomic, retain) NSMutableArray *serviceRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateObserverQueue;
@property (nonatomic, retain) NSHashTable *stateObservers;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

+ (id)sharedClientConnection;

- (void).cxx_destruct;
- (void)_broadcastConnectedStateChange;
- (id)_clientWithIdentifier:(id)arg1;
- (void)_initializeServiceConnection;
- (void)_processXPCReply:(id)arg1 context:(id)arg2;
- (void)cleanUp;
- (id)connectionAccessQueue;
- (void)dealloc;
- (id)init;
- (bool)isConnected;
- (void)performBlockWithXPCConnection:(id /* block */)arg1;
- (void)performLaunchAngelTask:(id /* block */)arg1;
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;
- (void)registerConnectionStateObserver:(id)arg1;
- (id)registeredClients;
- (id)registeredClientsAccessQueue;
- (oneway void)sendBoardServiceMessage:(id)arg1 callback:(id /* block */)arg2;
- (id)serviceConnection;
- (id)serviceConnectionQueue;
- (id)serviceRequests;
- (void)setConnected:(bool)arg1;
- (void)setConnectionAccessQueue:(id)arg1;
- (void)setRegisteredClients:(id)arg1;
- (void)setRegisteredClientsAccessQueue:(id)arg1;
- (void)setServiceConnection:(id)arg1;
- (void)setServiceConnectionQueue:(id)arg1;
- (void)setServiceRequests:(id)arg1;
- (void)setStateObserverQueue:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)stateObserverQueue;
- (id)stateObservers;
- (void)tearDownConnection;
- (void)unregisterClient:(id)arg1 withIdentifier:(id)arg2;
- (void)unregisterConnectionStateObserver:(id)arg1;
- (id)xpcConnection;

@end

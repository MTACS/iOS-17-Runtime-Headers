
@interface SLDServiceProxy : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSXPCConnection * _conn;
    bool  _connectionActive;
    unsigned long long  _connectionRetryCount;
    <SLDServiceProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _propertyConcurrentQueue;
    Class  _serviceClass;
    bool  _shouldAutoReconnect;
    bool  _waitingForConnection;
}

@property (nonatomic, readonly) <SLDActiveCallService> *activeCallService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) <SLDCollaborationAttributionViewService> *collaborationAttributionViewService;
@property (nonatomic, retain) NSXPCConnection *conn;
@property (nonatomic) bool connectionActive;
@property (nonatomic) unsigned long long connectionRetryCount;
@property (nonatomic) <SLDServiceProxyDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyConcurrentQueue;
@property (nonatomic) Class serviceClass;
@property (nonatomic) bool shouldAutoReconnect;
@property (nonatomic) bool waitingForConnection;

+ (id)proxyForServiceClass:(Class)arg1 targetSerialQueue:(id)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (void)_atomicConfigureWithNewConnection:(id)arg1;
- (void)_connectionInvalidated;
- (void)_establishNewConnection;
- (void)_invalidateAndDestroyConnection;
- (void)_notifyDelegateProxyDidConnect;
- (void)_notifyDelegateProxyDidDisconnect;
- (void)_receivedServiceConnection:(id)arg1;
- (id)activeCallService;
- (id)clientQueue;
- (id)collaborationAttributionViewService;
- (id)conn;
- (void)connect;
- (bool)connectionActive;
- (unsigned long long)connectionRetryCount;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)disconnect;
- (id)initWithServiceClass:(Class)arg1 targetSerialQueue:(id)arg2 delegate:(id)arg3;
- (id)propertyConcurrentQueue;
- (int)remoteProcessID;
- (id)remoteService;
- (Class)serviceClass;
- (void)setConn:(id)arg1;
- (void)setConnectionActive:(bool)arg1;
- (void)setConnectionRetryCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceClass:(Class)arg1;
- (void)setShouldAutoReconnect:(bool)arg1;
- (void)setWaitingForConnection:(bool)arg1;
- (bool)shouldAutoReconnect;
- (id)synchronousRemoteService;
- (id)synchronousRemoteServiceWithErrorHandler:(id /* block */)arg1;
- (bool)waitingForConnection;

@end

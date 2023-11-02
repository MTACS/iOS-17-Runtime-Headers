
@interface CRSSessionService : NSObject <BSServiceConnectionListenerDelegate, CRSSessionClientToServerInterface> {
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSHashTable * _connections;
    NSObject<OS_os_transaction> * _idleExitTransaction;
    BSServiceConnectionListener * _listener;
    <BSInvalidatable> * _watchdogMonitoringAssertion;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSHashTable *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_transaction> *idleExitTransaction;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *watchdogMonitoringAssertion;

- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (id)connectionQueue;
- (id)connections;
- (id)idleExitTransaction;
- (id)init;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setIdleExitTransaction:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setWatchdogMonitoringAssertion:(id)arg1;
- (id)watchdogMonitoringAssertion;

@end

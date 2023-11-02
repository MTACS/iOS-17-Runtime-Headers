
@interface GEONavdRemoteProxy : GEONavdServerProxy <GEONavdProxyObserver> {
    NSXPCConnection * _connection;
    NSMutableDictionary * _handlers;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <GEONavdXPCInterface> *remoteObjectProxyThreadUnsafe;

- (void).cxx_destruct;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)close;
- (void)dealloc;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;
- (id)init;
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)open;
- (void)registerObserver:(id)arg1;
- (id)remoteObjectProxyThreadUnsafe;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)shouldPostDarwinNotificationForNextUpdate:(bool)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(id /* block */)arg4;
- (void)statusWithCallback:(id /* block */)arg1;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)unregisterObserver:(id)arg1;

@end

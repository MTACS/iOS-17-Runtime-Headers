
@interface HMEPersistentConnectionServer : HMERouterServer {
    <HMEPersistentConnectionServerDataSource> * _dataSource;
    <HMEPersistentConnectionServerDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
}

@property <HMEPersistentConnectionServerDataSource> *dataSource;
@property <HMEPersistentConnectionServerDelegate> *delegate;

- (void).cxx_destruct;
- (void)changeRegistrationsForConnection:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)connectWithConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3 completion:(id /* block */)arg4;
- (id)dataSource;
- (id)delegate;
- (void)didInvalidateConnection:(id)arg1;
- (void)disconnectConnection:(id)arg1;
- (id)expandedTopicsForTopics:(id)arg1;
- (void)handleCachedEvent:(id)arg1 topic:(id)arg2;
- (void)handleEvent:(id)arg1 topic:(id)arg2;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 storeReadHandle:(id)arg4 logCategory:(const char *)arg5;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)upstreamTopicsForTopic:(id)arg1;

@end

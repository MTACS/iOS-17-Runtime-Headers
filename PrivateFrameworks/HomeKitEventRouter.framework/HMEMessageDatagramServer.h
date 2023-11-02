
@interface HMEMessageDatagramServer : HMERouterServer {
    <HMETimer> * _connectionDebounceTimer;
    <HMETimer> * _connectionExpiryTimer;
    NSMutableArray * _connectionInfoItems;
    <HMEMessageDatagramServerDataSource> * _dataSource;
    <HMEMessageDatagramServerDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
}

@property (retain) <HMETimer> *connectionDebounceTimer;
@property (retain) <HMETimer> *connectionExpiryTimer;
@property (nonatomic, readonly) NSMutableArray *connectionInfoItems;
@property <HMEMessageDatagramServerDataSource> *dataSource;
@property <HMEMessageDatagramServerDelegate> *delegate;

- (void).cxx_destruct;
- (void)changeRegistrationsForConnection:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)connectWithConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3 topicFilterAdditions:(id)arg4 completion:(id /* block */)arg5;
- (id)connectionDebounceTimer;
- (id)connectionExpiryTimer;
- (id)connectionInfoItems;
- (id)dataSource;
- (id)delegate;
- (void)disconnectConnection:(id)arg1;
- (id)dumpStateDescription;
- (id)expandedTopicsForTopics:(id)arg1;
- (void)fetchCachedEventsForTopics:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCachedEvent:(id)arg1 topic:(id)arg2;
- (void)handleEvent:(id)arg1 topic:(id)arg2;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 storeReadHandle:(id)arg4 logCategory:(const char *)arg5;
- (void)keepAliveConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshConnection:(id)arg1;
- (void)reset;
- (void)resetExistingEvents;
- (void)setConnectionDebounceTimer:(id)arg1;
- (void)setConnectionExpiryTimer:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)upstreamTopicsForTopic:(id)arg1;

@end

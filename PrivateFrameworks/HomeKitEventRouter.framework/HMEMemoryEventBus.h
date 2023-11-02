
@interface HMEMemoryEventBus : NSObject <HMEEventConsumer, HMEEventForwarder, HMELastEventStoreWriter, HMESubscriptionProviding, HMESynchronousSubscriptionProviding, HMETopicRouterDelegate> {
    <HMEMemoryEventBusDataSource> * _dataSource;
    <HMEMemoryEventBusDelegate> * _delegate;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMELastEventStoreWriteHandle> * _eventStoreWriteHandle;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
    HMETopicRouter * _topicRouter;
}

@property <HMEMemoryEventBusDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMEMemoryEventBusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) <HMELastEventStoreWriteHandle> *eventStoreWriteHandle;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter;

- (void).cxx_destruct;
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)changeRegistrationsSyncForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (id)dataSource;
- (id)delegate;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)eventStoreReadHandle;
- (id)eventStoreWriteHandle;
- (void)forwardEvent:(id)arg1 topic:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logCategory:(const char *)arg4;
- (id)queue;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)synchronousSubscriptionProvider;
- (id)topicRouter;
- (void)unregisterConsumer:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterConsumerSync:(id)arg1 completion:(id /* block */)arg2;
- (id)upstreamTopicsForTopic:(id)arg1;

@end


@interface HMEDelegatingEventRouter : NSObject <HMEEventConsumer, HMESubscriptionProviding, HMESynchronousSubscriptionProviding, HMETopicRouterDelegate> {
    <HMEDelegatingEventRouterDataSource> * _dataSource;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    NSUUID * _identifier;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _subRouters;
    HMETopicRouter * _topicRouter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)changeRegistrationsSyncForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (id)description;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)identifier;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 logger:(id)arg3;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 storeReadHandle:(id)arg3 logCategory:(const char *)arg4 identifier:(id)arg5;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 storeReadHandle:(id)arg3 logger:(id)arg4 identifier:(id)arg5;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)registerSubRouter:(id)arg1;
- (void)unregisterConsumer:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterConsumerSync:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterSubRouter:(id)arg1;
- (id)upstreamTopicsForTopic:(id)arg1;

@end

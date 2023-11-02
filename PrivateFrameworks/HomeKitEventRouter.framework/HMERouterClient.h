
@interface HMERouterClient : NSObject <HMECachedEventSource, HMELastEventStoreWriter, HMESubscriptionProviding, HMESynchronousSubscriptionProviding, HMETopicRouterDelegate> {
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMELastEventStoreWriteHandle> * _eventStoreWriteHandle;
    NSObject<OS_os_log> * _logger;
    <HMERouterClientDelegate> * _privateDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    HMETopicRouter * _topicRouter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) <HMELastEventStoreWriteHandle> *eventStoreWriteHandle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCachedEventSourceCurrentProcess;
@property <HMERouterClientDelegate> *privateDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter;

- (void).cxx_destruct;
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)changeRegistrationsSyncForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3 completion:(id /* block */)arg4;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;
- (id)dumpStateDescription;
- (id)eventStoreReadHandle;
- (id)eventStoreWriteHandle;
- (void)finishedWritingToStore:(unsigned long long)arg1;
- (id)forwardingTopicsForTopics:(id)arg1;
- (bool)handleChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 logger:(id)arg3;
- (id)initWithQueue:(id)arg1 storeReadHandle:(id)arg2 storeWriteHandle:(id)arg3 logger:(id)arg4;
- (bool)isActiveForSaving;
- (bool)isCachedEventSourceCurrentProcess;
- (id)privateDelegate;
- (void)processReceivedCachedEvents:(id)arg1;
- (void)processReceivedEvents:(id)arg1;
- (id)queue;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)setPrivateDelegate:(id)arg1;
- (id)synchronousSubscriptionProvider;
- (id)topicRouter;
- (void)unregisterConsumer:(id)arg1 completion:(id /* block */)arg2;
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2 completion:(id /* block */)arg3;
- (void)unregisterConsumerSync:(id)arg1 completion:(id /* block */)arg2;
- (id)upstreamTopicsForTopic:(id)arg1;
- (unsigned long long)willWriteToStore;

@end

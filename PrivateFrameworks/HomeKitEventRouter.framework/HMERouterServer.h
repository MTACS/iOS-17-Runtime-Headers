
@interface HMERouterServer : NSObject <HMEEventConsumer, HMELastEventStoreWriter, HMETopicRouterDelegate> {
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMEEventForwarder> * _localEventForwarder;
    NSObject<OS_os_log> * _logger;
    NSObject<OS_dispatch_queue> * _queue;
    <HMESynchronousSubscriptionProviding> * _subscriptionProvider;
    HMETopicRouter * _topicRouter;
    NSMapTable * _unregisterEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) unsigned long long hash;
@property (readonly) <HMEEventForwarder> *localEventForwarder;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) <HMESynchronousSubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property (readonly) HMETopicRouter *topicRouter;
@property (readonly) NSMapTable *unregisterEvents;

- (void).cxx_destruct;
- (id)cachedEventsForExpandedTopics:(id)arg1;
- (void)didChangeRegistrationsWithTopicFilterAdditions:(id)arg1 removals:(id)arg2;
- (void)didConnectConnection:(id)arg1 connectEvent:(id)arg2 unregisterEvent:(id)arg3;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didRemoveConnection:(id)arg1;
- (id)dumpStateDescription;
- (id)eventStoreReadHandle;
- (id)expandedTopicsForTopics:(id)arg1;
- (void)handleCachedEvent:(id)arg1 topic:(id)arg2;
- (void)handleEvent:(id)arg1 topic:(id)arg2;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3;
- (id)initWithQueue:(id)arg1 provider:(id)arg2 registrationEventRouter:(id)arg3 storeReadHandle:(id)arg4 logger:(id)arg5;
- (id)localEventForwarder;
- (id)queue;
- (id)subscriptionProvider;
- (id)topicRouter;
- (id)unregisterEvents;
- (id)upstreamTopicsForTopic:(id)arg1;

@end

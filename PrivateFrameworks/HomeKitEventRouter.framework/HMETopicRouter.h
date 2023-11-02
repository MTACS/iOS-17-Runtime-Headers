
@interface HMETopicRouter : NSObject {
    <HMETopicRouterDelegate> * _delegate;
    NSObject<OS_os_log> * _logger;
    NSMutableSet * _registeredTopics;
    NSMapTable * _registrations;
}

@property (readonly) <HMETopicRouterDelegate> *delegate;
@property (nonatomic, readonly) NSMutableSet *registeredTopics;
@property (nonatomic, readonly) NSMapTable *registrations;

+ (id)forwardingTopicsForAdditions:(id)arg1 removals:(id)arg2 current:(id)arg3 indexProvider:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)allRegisteredTopicFilters;
- (void)changeRegistrationsForConsumer:(id)arg1 topicFilterAdditions:(id)arg2 topicFilterRemovals:(id)arg3;
- (id)consumersForTopic:(id)arg1;
- (id)delegate;
- (id)dumpStateDescription;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 logCategory:(const char *)arg2;
- (id)initWithDelegate:(id)arg1 logger:(id)arg2;
- (id)minimalSpanningTopicFilters;
- (void)registerConsumer:(id)arg1 topicFilters:(id)arg2;
- (id)registeredTopics;
- (id)registrations;
- (id)topicsForConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1;
- (void)unregisterConsumer:(id)arg1 topicFilters:(id)arg2;

@end

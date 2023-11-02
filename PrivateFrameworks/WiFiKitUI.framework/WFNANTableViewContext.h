
@interface WFNANTableViewContext : NSObject <WiFiAwarePublisherDelegate, WiFiAwareSubscriberDelegate> {
    NSMutableDictionary * _dataSessionsForPublish;
    NSMutableDictionary * _dataSessionsForSubscribe;
    NSMutableDictionary * _discoveryResults;
    NSMutableArray * _publishers;
    NSMutableArray * _subscribers;
}

@property (nonatomic, retain) NSMutableDictionary *dataSessionsForPublish;
@property (nonatomic, retain) NSMutableDictionary *dataSessionsForSubscribe;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveryResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *publishers;
@property (nonatomic, retain) NSMutableArray *subscribers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataSession:(id)arg1 forPublisher:(id)arg2;
- (void)addDataSession:(id)arg1 forSubscriber:(id)arg2;
- (void)addDiscoveryResult:(id)arg1 forSubscriber:(id)arg2;
- (void)addPublisher:(id)arg1;
- (void)addSubscriber:(id)arg1;
- (id)dataSessionsForPublish;
- (id)dataSessionsForSubscribe;
- (id)discoveryResults;
- (id)getDataSessionAtIndex:(long long)arg1 forPublisher:(id)arg2;
- (id)getDataSessionAtIndex:(long long)arg1 forSubscriber:(id)arg2;
- (long long)getDataSessionsCountForPublisher:(id)arg1;
- (long long)getDataSessionsCountForSubscriber:(id)arg1;
- (id)getDataSessionsForPublisher:(id)arg1;
- (id)getDataSessionsForSubscriber:(id)arg1;
- (id)getDiscoveryResultAtIndex:(long long)arg1 forSubscriber:(id)arg2;
- (long long)getDiscoveryResultsCountForSubscriber:(id)arg1;
- (id)getDiscoveryResultsForSubscriber:(id)arg1;
- (id)getPublisherAtIndex:(long long)arg1;
- (id)getPublishers;
- (long long)getPublishersCount;
- (id)getSubscriberAtIndex:(long long)arg1;
- (id)getSubscribers;
- (long long)getSubscribersCount;
- (id)init;
- (void)publisher:(id)arg1 dataConfirmedForHandle:(id)arg2 localInterfaceIndex:(unsigned int)arg3 serviceSpecificInfo:(id)arg4;
- (void)publisher:(id)arg1 dataTerminatedForHandle:(id)arg2 reason:(long long)arg3;
- (void)publisher:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)publisher:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)publisherStarted:(id)arg1;
- (id)publishers;
- (void)removeDataSession:(id)arg1 forPublisher:(id)arg2;
- (void)removeDataSession:(id)arg1 forSubscriber:(id)arg2;
- (void)removeDiscoveryResultWithPublishID:(unsigned char)arg1 andPublisherAddress:(id)arg2 forSubscriber:(id)arg3;
- (void)removePublisher:(id)arg1;
- (void)removePublisherAtIndex:(long long)arg1;
- (void)removeSubscriber:(id)arg1;
- (void)removeSubscriberAtIndex:(long long)arg1;
- (void)setDataSessionsForPublish:(id)arg1;
- (void)setDataSessionsForSubscribe:(id)arg1;
- (void)setDiscoveryResults:(id)arg1;
- (void)setPublishers:(id)arg1;
- (void)setSubscribers:(id)arg1;
- (void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;
- (void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
- (void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)subscriberStarted:(id)arg1;
- (id)subscribers;

@end


@interface HMDMediaGroupsAggregateConsumer : HMFObject <HMDMediaGroupsAggregateConsumerDataProvider, HMDMediaGroupsStageManagerDelegate, HMEEventConsumer, HMFLogging> {
    <HMDMediaGroupsAggregateConsumerDelegate> * _delegate;
    NSUUID * _identifier;
    NSObject<OS_os_log> * _logger;
    NSNotificationCenter * _notificationCenter;
    HMDMediaGroupsStageManager * _stageManager;
    <HMESubscriptionProviding> * _subscriptionProvider;
}

@property (readonly) HMDMediaGroupsAggregateData *aggregationData;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaGroupsAggregateConsumerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) HMDMediaGroupsStageManager *stageManager;
@property (readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)aggregationData;
- (id)allMediaSystemData;
- (void)commitAggregationData:(id)arg1;
- (void)configureWithHome:(id)arg1;
- (id)delegate;
- (id)destinationControllerDataWithParentIdentifier:(id)arg1;
- (id)destinationWithIdentifier:(id)arg1;
- (id)destinationWithParentIdentifier:(id)arg1;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didUpdateAggregateDataForMediaGroupsStageManager:(id)arg1;
- (id)groupWithIdentifier:(id)arg1;
- (id)groups;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 subscriptionProvider:(id)arg2 notificationCenter:(id)arg3 stageManager:(id)arg4;
- (bool)isAggregateTopic:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystemDataWithIdentifier:(id)arg1;
- (id)notificationCenter;
- (void)notifyOfUpdatedAggregateData;
- (void)setDelegate:(id)arg1;
- (id)stageManager;
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)arg1;
- (void)startSubscriptionForHome:(id)arg1;
- (void)stopSubscription;
- (id)subscriptionProvider;
- (void)unconfigure;
- (void)unstageNullDestinationForCurrentDestinationController;

@end

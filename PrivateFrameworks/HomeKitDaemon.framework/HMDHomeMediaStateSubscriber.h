
@interface HMDHomeMediaStateSubscriber : HMFObject <HMEEventConsumer, HMFLogging> {
    <HMDHomeMediaStateSubscriberDataSource> * _dataSource;
    NSUUID * _homeUUID;
    <HMESubscriptionProviding> * _subscriptionProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) <HMDHomeMediaStateSubscriberDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (nonatomic, readonly) <HMESubscriptionProviding> *subscriptionProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)dataSource;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)homeUUID;
- (id)initWithHomeUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 subscriptionProvider:(id)arg4;
- (id)logIdentifier;
- (void)subscribeForAppleMediaState;
- (void)subscribeForAppleMediaStateForAccessory:(id)arg1;
- (id)subscriptionProvider;
- (void)unsubscribeForAppleMediaState;
- (void)unsubscribeForAppleMediaStateForAccessory:(id)arg1;
- (id)workQueue;

@end

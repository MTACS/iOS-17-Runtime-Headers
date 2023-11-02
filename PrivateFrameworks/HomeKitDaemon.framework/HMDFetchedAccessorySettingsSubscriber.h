
@interface HMDFetchedAccessorySettingsSubscriber : NSObject <HMEEventConsumer, HMFLogging> {
    NSMutableDictionary * _cachedSettings;
    <HMDFetchedAccessorySettingsSubscriberDelegate> * _delegate;
    NSUUID * _homeUUID;
    NSArray * _keyPaths;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMESubscriptionProviding> * _subscriptionProvider;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDFetchedAccessorySettingsSubscriberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cachedSettingForAccessory:(id)arg1 keyPath:(id)arg2;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (id)initWithWorkQueue:(id)arg1 subscriptionProvider:(id)arg2 keyPaths:(id)arg3 homeUUID:(id)arg4;
- (id)logIdentifier;
- (void)setDelegate:(id)arg1;
- (void)subscribeToSettingsForAccessoryUUIDs:(id)arg1;
- (void)unsubscribeForAccessory:(id)arg1;
- (void)unsubscribeToAllAccessories;

@end

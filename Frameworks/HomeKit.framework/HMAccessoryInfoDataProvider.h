
@interface HMAccessoryInfoDataProvider : NSObject <HMEEventConsumer, HMFLogging> {
    <HMAccessoryInfoDataProviderDataSource> * _dataSource;
    <HMAccessoryInfoDataProviderDelegate> * _delegate;
    <HMELastEventStoreReadHandle> * _eventStoreReadHandle;
    <HMESubscriptionProviding> * _eventSubscriptionProvider;
}

@property <HMAccessoryInfoDataProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessoryInfoDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) <HMELastEventStoreReadHandle> *eventStoreReadHandle;
@property (readonly) <HMESubscriptionProviding> *eventSubscriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryUUIDForIdentifier:(id)arg1 homeIdentifier:(id)arg2;
- (void)configureWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 accessoryInfoTypes:(unsigned long long)arg3 dataProviderDelegate:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)dataSource;
- (id)dataSourceHomeWithHomeIdentifier:(id)arg1;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2 logMessage:(id)arg3;
- (id)eventStoreReadHandle;
- (id)eventSubscriptionProvider;
- (id)homeUUIDForIdentifier:(id)arg1;
- (id)initWithEventStoreReadHandle:(id)arg1 subscriptionProvider:(id)arg2;
- (void)notifyDelegateDidReceiveAccountInfoUpdatesForAccessoryWithIdentifier:(id)arg1 accountInfo:(id)arg2;
- (void)notifyDelegateDidReceiveAccountInfoUpdatesForAccessoryWithIdentifier:(id)arg1 primaryUserInfo:(id)arg2;
- (void)notifyDelegateDidReceiveWifiNetworkInfoUpdatesForAccessoryWithIdentifier:(id)arg1 wifiNetworkInfo:(id)arg2;
- (void)notifyOfCachedEvents:(id)arg1;
- (void)notifyOfEventStoreLastEventForTopic:(id)arg1;
- (void)notifyOfEventStoreLastEventsForTopics:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)subscribeToAccessoryInfoWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 accessoryInfoTypes:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)unsubscribeToAccessoryInfoWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 accessoryInfoTypes:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;

@end

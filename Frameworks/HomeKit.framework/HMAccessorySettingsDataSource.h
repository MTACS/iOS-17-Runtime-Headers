
@interface HMAccessorySettingsDataSource : NSObject <HMEEventConsumer, HMELastEventStoreWriter, HMFLogging> {
    _HMContext * _context;
    <HMAccessorySettingsDataSourceDataSource> * _dataSource;
    <HMAccessorySettingsDataSourceDelegate> * _delegate;
    <HMESubscriptionProviding> * _eventSubscriptionProvider;
    <HMELastEventStoreReadHandle> * _lastEventStoreReadHandle;
    <HMELastEventStoreWriteHandle> * _lastEventStoreWriteHandle;
    HMLocalization * _localizationManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMAccessorySettingsMessenger * _messenger;
    <HMAccessorySettingsMessengerFactory> * _messengerFactory;
    HMAccessorySettingsMetricsDispatcher * _metricsDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) _HMContext *context;
@property <HMAccessorySettingsDataSourceDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMAccessorySettingsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMAccessorySettingsMessengerFactory> *messengerFactory;
@property (readonly) Class superclass;

+ (id)defaultLanguageValue;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)context;
- (id)dataSource;
- (void)dealloc;
- (id)defaultSettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3;
- (id)delegate;
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;
- (void)fetchAccessorySettingsWithAccessoryIdentifier:(id)arg1 keyPaths:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchCachedAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithContext:(id)arg1 localizationManager:(id)arg2 messengerFactory:(id)arg3 subscriptionProvider:(id)arg4 lastEventStoreReadHandle:(id)arg5 lastEventStoreWriteHandle:(id)arg6 metricsDispatcher:(id)arg7;
- (id)localizedTitleForKeyPath:(id)arg1;
- (id)messengerFactory;
- (void)resetSubscriptions;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)subscribeToAccessorySettingsWithAccessoryIdentifier:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)subscribeToAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)subscribeToMediaSystemSettingsWithHomeIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 keyPaths:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)unsubscribeToAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)unsubscribeToMediaSystemSettingsWithHomeIdentifier:(id)arg1 mediaSystemIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(id /* block */)arg4;

@end

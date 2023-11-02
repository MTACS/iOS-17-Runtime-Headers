
@interface HMDFetchedAccessorySettingsController : NSObject <HMDFetchedSettingsDriverDelegate, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMFLogging> {
    <HMDFetchedAccessorySettingsControllerDataSource> * _dataSource;
    HMDFetchedAccessorySettingsControllerMutableKeyPathMap * _driverMap;
    NSMutableDictionary * _keyPathToSettingCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    NSNotificationCenter * _notificationCenter;
    NSMutableSet * _pendingFetchKeyPaths;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) <HMDFetchedAccessorySettingsControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDFetchedAccessorySettingsControllerMutableKeyPathMap *driverMap;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain) NSMutableSet *pendingFetchKeyPaths;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cachedSettingForKeyPath:(id)arg1;
- (id)dataSource;
- (void)driver:(id)arg1 didUpdatePrimaryUserInfo:(id)arg2;
- (void)driver:(id)arg1 didUpdateSettings:(id)arg2;
- (void)driverDidReload:(id)arg1;
- (id)driverMap;
- (void)fetchSettingsForKeyPaths:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 drivers:(id)arg3;
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 drivers:(id)arg3 notificationCenter:(id)arg4;
- (void)languageValueListWithCompletion:(id /* block */)arg1;
- (id)notificationCenter;
- (id)pendingFetchKeyPaths;
- (id)queue;
- (void)setPendingFetchKeyPaths:(id)arg1;
- (void)start;
- (void)updateSettingWithKeyPath:(id)arg1 settingValue:(id)arg2 completion:(id /* block */)arg3;

@end

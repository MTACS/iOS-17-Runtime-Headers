
@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> * _callOutQueue;
    NSObject<OS_dispatch_source> * _configurationChangedSource;
    NSHashTable * _observers;
    NSArray * _orderedFixedModuleIdentifiers;
    NSArray * _orderedUserEnabledFixedModuleIdentifiers;
    NSArray * _orderedUserEnabledModuleIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _userDisabledModuleIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *orderedFixedModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *orderedUserEnabledFixedModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *orderedUserEnabledModuleIdentifiers;
@property (nonatomic, readonly, copy) NSArray *userDisabledModuleIdentifiers;

+ (id)_configurationDirectoryURL;
+ (id)_configurationFileURL;
+ (bool)_continuousExposeEnabled;
+ (id)_defaultEnabledModuleOrder;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_defaultUserEnabledFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_readSettingsWithVersion:(out unsigned long long*)arg1;
+ (void)_writeOrderedIdentifiers:(id)arg1 userEnabledFixedIdentifiers:(id)arg2 userDisabledIdentifiers:(id)arg3;
+ (void)initialize;
+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_queue_handleConfigurationFileUpdate;
- (void)_queue_loadSettings;
- (void)_queue_runBlockOnListeners:(id /* block */)arg1;
- (void)_queue_saveSettings;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1 previousOrderedUserEnabledModuleIdentifiers:(id)arg2;
- (void)_queue_startMonitoringConfigurationUpdates;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)orderedFixedModuleIdentifiers;
- (id)orderedUserEnabledFixedModuleIdentifiers;
- (id)orderedUserEnabledModuleIdentifiers;
- (void)removeObserver:(id)arg1;
- (void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)arg1 previousOrderedUserEnabledModuleIdentifiers:(id)arg2;
- (id)userDisabledModuleIdentifiers;

@end

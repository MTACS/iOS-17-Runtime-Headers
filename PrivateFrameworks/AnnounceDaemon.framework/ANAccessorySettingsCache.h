
@interface ANAccessorySettingsCache : NSObject <HMAccessorySettingsDataSourceDelegate> {
    HMAccessorySettingsDataSource * _accessorySettingsDataSource;
    NSMutableDictionary * _cachedAccessorySettings;
    NSMutableDictionary * _lastAccessorySettingsFetch;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _settingsQueue;
}

@property (nonatomic, readonly) HMAccessorySettingsDataSource *accessorySettingsDataSource;
@property (nonatomic, readonly) NSMutableDictionary *cachedAccessorySettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *lastAccessorySettingsFetch;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *settingsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchSettingsForAccessory:(id)arg1 useCache:(bool)arg2;
- (void)_removeSettingsForAccessoryWithIdentifier:(id)arg1;
- (void)_updateSettings:(id)arg1 forAccessoryWithIdentifier:(id)arg2;
- (id)accessorySettingsDataSource;
- (void)accessorySettingsDataSource:(id)arg1 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg2 settings:(id)arg3;
- (id)cachedAccessorySettings;
- (id)initWithAccessorySettingsDataSource:(id)arg1;
- (id)lastAccessorySettingsFetch;
- (id)log;
- (id)settingsForAccessory:(id)arg1;
- (id)settingsQueue;

@end

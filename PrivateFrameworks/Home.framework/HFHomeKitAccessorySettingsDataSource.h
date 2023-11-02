
@interface HFHomeKitAccessorySettingsDataSource : NSObject <HMAccessorySettingsDataSourceDelegate> {
    HMAccessorySettingsDataSource * _dataSource;
    NSHashTable * _observers;
}

@property (nonatomic, retain) HMAccessorySettingsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessorySettingsDataSource:(id)arg1 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg2 settings:(id)arg3;
- (void)addObserver:(id)arg1;
- (id)dataSource;
- (id)hf_defaultSettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3;
- (void)hf_fetchAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)hf_localizedTitleForKeyPath:(id)arg1;
- (void)hf_subscribeToAccessorySettingsWithHomeIdentifier:(id)arg1 accessoryIdentifier:(id)arg2 keyPaths:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithHomeManager:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)updateSettingValue:(id)arg1 forKeyPath:(id)arg2 accessoryIdentifier:(id)arg3;

@end

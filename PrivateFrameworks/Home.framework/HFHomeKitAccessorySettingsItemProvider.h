
@interface HFHomeKitAccessorySettingsItemProvider : HFItemProvider <HFHomeKitSettingItemProviderProtocol> {
    NSUUID * _accessoryIdentifier;
    NSArray * _allKeyPaths;
    NSString * _groupKeyPath;
    NSArray * _homeKitKeyPaths;
    HMHomeManager * _homeManager;
    NSArray * _moduleSettings;
    NSDictionary * _nonHomeKitSettingsDictionary;
    NSMutableSet * _settingItems;
    bool  _settingsAlreadyFetched;
    HMAccessorySettingsController * _settingsController;
    HFItem<HFServiceLikeItem> * _sourceItem;
    NSDictionary * _splitSettingsDictionary;
    NSDictionary * _usageOptions;
}

@property (nonatomic, retain) NSUUID *accessoryIdentifier;
@property (nonatomic, retain) NSArray *allKeyPaths;
@property (nonatomic, copy) NSString *groupKeyPath;
@property (nonatomic, retain) NSArray *homeKitKeyPaths;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (nonatomic, retain) NSArray *moduleSettings;
@property (nonatomic, retain) NSDictionary *nonHomeKitSettingsDictionary;
@property (nonatomic, retain) NSMutableSet *settingItems;
@property (nonatomic) bool settingsAlreadyFetched;
@property (nonatomic, retain) HMAccessorySettingsController *settingsController;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceItem;
@property (nonatomic, retain) NSDictionary *splitSettingsDictionary;
@property (nonatomic, retain) NSDictionary *usageOptions;

- (void).cxx_destruct;
- (id)_fetchSettingsAndReloadItems;
- (id)_generateAccessorySettingItemForSettings:(id)arg1 homeKitSettings:(id)arg2 keyPaths:(id)arg3;
- (id)_generateAccessorySettingItemForSettings:(id)arg1 keyPaths:(id)arg2;
- (id)_reloadItemsFromSettings:(id)arg1 performInitialUpdateOnItems:(bool)arg2;
- (void)_subscribeToAccessorySettings:(id)arg1;
- (id)accessoryIdentifier;
- (id)allKeyPaths;
- (id)groupKeyPath;
- (id)homeKitKeyPaths;
- (id)homeManager;
- (id)initWithSettingsController:(id)arg1 sourceItem:(id)arg2 settingGroupKeyPath:(id)arg3 moduleSettings:(id)arg4 usageOptions:(id)arg5;
- (id)items;
- (id)moduleSettings;
- (id)nonHomeKitSettingsDictionary;
- (id)reloadItems;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAllKeyPaths:(id)arg1;
- (void)setGroupKeyPath:(id)arg1;
- (void)setHomeKitKeyPaths:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setModuleSettings:(id)arg1;
- (void)setNonHomeKitSettingsDictionary:(id)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setSettingsAlreadyFetched:(bool)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (void)setSplitSettingsDictionary:(id)arg1;
- (void)setUsageOptions:(id)arg1;
- (id)settingItems;
- (bool)settingsAlreadyFetched;
- (id)settingsController;
- (bool)shouldUpdateForKeyPaths:(id)arg1;
- (id)sourceItem;
- (id)sourceItemAccessory;
- (id)splitSettingsDictionary;
- (void)updateSettingValue:(id)arg1 forKeyPath:(id)arg2;
- (bool)updateSettings:(id)arg1;
- (id)usageOptions;

@end

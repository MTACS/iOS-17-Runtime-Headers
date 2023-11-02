
@interface HUAirPlaySettingsDetailsItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate> {
    NSMutableSet * _allItemProviders;
    NSArray * _dependentSettingItems;
    NSArray * _homeKitAccessorySettingsModules;
    HUHomeKitAccessorySettingsItemModule * _module;
    NSString * _settingGroupKeyPath;
    HMAccessorySettingsController * _settingsController;
}

@property (nonatomic, retain) NSMutableSet *allItemProviders;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *dependentSettingItems;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeKitAccessorySettingsModules;
@property (nonatomic, retain) HUHomeKitAccessorySettingsItemModule *module;
@property (nonatomic, retain) NSString *settingGroupKeyPath;
@property (nonatomic, retain) HMAccessorySettingsController *settingsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_shouldHideModuleHavingGroupKeyPath:(id)arg1;
- (void)_subscribeToAccessorySettings:(id)arg1;
- (id)allItemProviders;
- (id)dependentSettingItems;
- (id)homeKitAccessorySettingsModules;
- (id)initWithDelegate:(id)arg1 module:(id)arg2;
- (id)module;
- (void)setAllItemProviders:(id)arg1;
- (void)setDependentSettingItems:(id)arg1;
- (void)setHomeKitAccessorySettingsModules:(id)arg1;
- (void)setModule:(id)arg1;
- (void)setSettingGroupKeyPath:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (id)settingGroupKeyPath;
- (id)settingsController;
- (id)updateSettingItem:(id)arg1 withValue:(id)arg2;

@end

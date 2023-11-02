
@interface HUSiriSettingsDetailsItemManager : HFItemManager <HFHomeKitAccessorySettingsDataSourceDelegate> {
    NSArray * _homeKitAccessorySettingsModules;
    HUHomeKitAccessorySettingsItemModule * _module;
    NSString * _settingGroupKeyPath;
    HMAccessorySettingsController * _settingsController;
    HFHomeKitAccessorySettingsItemProvider * _siriSettingsItemProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeKitAccessorySettingsModules;
@property (nonatomic, retain) HUHomeKitAccessorySettingsItemModule *module;
@property (nonatomic, retain) NSString *settingGroupKeyPath;
@property (nonatomic, retain) HMAccessorySettingsController *settingsController;
@property (nonatomic, retain) HFHomeKitAccessorySettingsItemProvider *siriSettingsItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_shouldSkipModuleCreationForGroupKeyPath:(id)arg1;
- (id)homeKitAccessorySettingsModules;
- (id)initWithDelegate:(id)arg1 module:(id)arg2;
- (id)module;
- (void)setHomeKitAccessorySettingsModules:(id)arg1;
- (void)setModule:(id)arg1;
- (void)setSettingGroupKeyPath:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSiriSettingsItemProvider:(id)arg1;
- (id)settingGroupKeyPath;
- (id)settingsController;
- (id)siriSettingsItemProvider;
- (id)updateSettingItem:(id)arg1 withValue:(id)arg2;

@end

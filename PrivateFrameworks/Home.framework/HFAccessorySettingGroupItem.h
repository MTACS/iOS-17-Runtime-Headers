
@interface HFAccessorySettingGroupItem : HFItem <HFHomeKitSettingItemProtocol, HFHomeKitSettingsVendorProvider> {
    HFAccessorySettingsEntity * _entity;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    HMAccessorySelectionSetting * _selectionSetting;
    HMSettingGroup * _settingGroup;
    NSDictionary * _usageOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, readonly) HMAccessorySelectionSetting *selectionSetting;
@property (nonatomic, readonly) HMSettingGroup *settingGroup;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *usageOptions;

- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)_useManagedConfigurationForProfiles;
- (bool)_validateKeyPathDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)homeKitSettingsVendor;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 entity:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 selectionSetting:(id)arg3;
- (id)selectionSetting;
- (void)setUsageOptions:(id)arg1;
- (id)settingGroup;
- (id)settingKeyPath;
- (id)usageOptions;

@end

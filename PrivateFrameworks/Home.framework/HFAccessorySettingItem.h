
@interface HFAccessorySettingItem : HFItem <HFHomeKitSettingItemProtocol> {
    HFAccessorySettingsEntity * _entity;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    HMSetting * _setting;
    NSDictionary * _usageOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, retain) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, retain) HMSetting *setting;
@property (nonatomic, readonly) NSString *settingKeyPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *usageOptions;

- (void).cxx_destruct;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)_validateKeyPathDependencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entity;
- (id)homeKitObject;
- (id)homeKitSettingsVendor;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;
- (void)setEntity:(id)arg1;
- (void)setHomeKitSettingsVendor:(id)arg1;
- (void)setSetting:(id)arg1;
- (void)setUsageOptions:(id)arg1;
- (id)setting;
- (id)settingKeyPath;
- (id)updateValue:(id)arg1;
- (id)usageOptions;
- (id)value;

@end

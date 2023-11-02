
@interface _HomeKitSettingToHFItem_CacheItem : NSObject <NAIdentifiable> {
    HFAccessorySettingsEntity * _accessoryGroupEntity;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    HMAccessorySelectionSettingItem * _optionItem;
    HFItem * _outputItem;
    HMSettingGroup * _settingGroup;
    HMSetting * _singleSetting;
    NSDictionary * _usageOptions;
}

@property (nonatomic, readonly) HFAccessorySettingsEntity *accessoryGroupEntity;
@property (nonatomic, readonly) NSString *cacheKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) HMAccessorySelectionSettingItem *optionItem;
@property (nonatomic, readonly) HFItem *outputItem;
@property (nonatomic, readonly) HMSettingGroup *settingGroup;
@property (nonatomic, readonly) HMSetting *singleSetting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *usageOptions;

+ (bool)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)accessoryGroupEntity;
- (id)cacheKey;
- (id)description;
- (unsigned long long)hash;
- (id)homeKitSettingsVendor;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (id)optionItem;
- (id)outputItem;
- (id)settingGroup;
- (bool)shouldBeDisplayed;
- (id)singleSetting;
- (id)usageOptions;

@end

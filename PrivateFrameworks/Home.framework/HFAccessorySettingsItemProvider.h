
@interface HFAccessorySettingsItemProvider : HFItemProvider {
    id /* block */  _filter;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    NATreeNode * _parentNode;
    HMSettingGroup * _settingGroup;
    NSMutableSet * _settingItems;
    NSMutableDictionary * _settingToItemCache;
    NSDictionary * _usageOptions;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, readonly) NATreeNode *parentNode;
@property (nonatomic, retain) HMSettingGroup *settingGroup;
@property (nonatomic, retain) NSMutableSet *settingItems;
@property (nonatomic, retain) NSMutableDictionary *settingToItemCache;
@property (nonatomic, retain) NSDictionary *usageOptions;

+ (id)buildItemTuplesForHomeKitSettings:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 underNode:(id)arg4 cache:(id)arg5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)homeKitSettingsVendor;
- (id)initWithHomeKitSettingsVendor:(id)arg1 settingGroup:(id)arg2 usageOptions:(id)arg3;
- (id)invalidationReasons;
- (id)items;
- (id)parentNode;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setSettingGroup:(id)arg1;
- (void)setSettingItems:(id)arg1;
- (void)setSettingToItemCache:(id)arg1;
- (void)setUsageOptions:(id)arg1;
- (id)settingGroup;
- (id)settingItems;
- (id)settingToItemCache;
- (id)usageOptions;

@end

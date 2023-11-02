
@interface HUAccessorySettingsProfileItemProvider : HFItemProvider {
    NSMutableSet * _accessorySettingsProfileItems;
    HFAccessorySettingManagedConfigurationAdapter * _adapter;
    id /* block */  _filter;
    HMSettingGroup * _settingGroup;
}

@property (nonatomic, retain) NSMutableSet *accessorySettingsProfileItems;
@property (nonatomic, retain) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HMSettingGroup *settingGroup;

- (void).cxx_destruct;
- (id)accessorySettingsProfileItems;
- (id)adapter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)filter;
- (id)initWithAdapter:(id)arg1 settingGroup:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setAccessorySettingsProfileItems:(id)arg1;
- (void)setAdapter:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setSettingGroup:(id)arg1;
- (id)settingGroup;

@end

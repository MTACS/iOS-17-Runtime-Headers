
@interface HFAccessorySettingOptionItem : HFAccessorySettingItem {
    HMAccessorySelectionSettingItem * _optionItem;
    NSDictionary * _usageOptions;
}

@property (nonatomic, retain) HMAccessorySelectionSettingItem *optionItem;
@property (nonatomic, retain) NSDictionary *usageOptions;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)homeKitObject;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;
- (id)optionItem;
- (void)setOptionItem:(id)arg1;
- (void)setUsageOptions:(id)arg1;
- (id)settingKeyPath;
- (id)toggleSelection;
- (id)usageOptions;
- (id)value;

@end

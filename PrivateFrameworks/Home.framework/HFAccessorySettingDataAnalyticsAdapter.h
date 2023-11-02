
@interface HFAccessorySettingDataAnalyticsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)configureSection:(id)arg1 forEntity:(id)arg2;
- (id)customizeSections:(id)arg1 forEntity:(id)arg2;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end

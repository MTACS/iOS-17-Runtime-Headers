
@interface HFAccessorySettingDoorbellChimeAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end

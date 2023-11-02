
@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)areAllAccessoriesLoggedIntoSameAccount:(id)arg1;
+ (bool)areAllAccessoriesLoggedOut:(id)arg1;

- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end

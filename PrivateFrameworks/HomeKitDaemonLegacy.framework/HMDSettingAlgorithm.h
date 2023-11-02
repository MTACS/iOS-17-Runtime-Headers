
@interface HMDSettingAlgorithm : NSObject

+ (id)allGroupsFromRootGroup:(id)arg1;
+ (id)allSettingsFromRootGroup:(id)arg1;
+ (void)findChangedSettingsWithRootGroup:(id)arg1 currentGroups:(id)arg2 currentSettings:(id)arg3 completion:(id /* block */)arg4;

@end

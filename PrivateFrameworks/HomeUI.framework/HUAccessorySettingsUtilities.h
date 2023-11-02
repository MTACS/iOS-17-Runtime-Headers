
@interface HUAccessorySettingsUtilities : NSObject

+ (bool)_shouldCollapseModuleForGroupKeyPath:(id)arg1;
+ (bool)_shouldSkipModuleCreationForGroupKeyPath:(id)arg1 accessory:(id)arg2 home:(id)arg3;
+ (id)generateModulesFromSettingsDictionary:(id)arg1 itemUpdater:(id)arg2 home:(id)arg3 sourceItem:(id)arg4 usageOptions:(id)arg5 settingsController:(id)arg6;

@end

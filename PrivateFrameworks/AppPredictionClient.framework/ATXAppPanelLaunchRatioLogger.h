
@interface ATXAppPanelLaunchRatioLogger : NSObject

+ (id)_getOrCreateDataDictionaryFromDefaults:(id)arg1;
+ (int)_homeScreenLocationFromPageIndex:(unsigned long long)arg1;
+ (void)_logRatioMetricToTracker:(id)arg1 location:(int)arg2 ratioType:(int)arg3 numAppLaunches:(unsigned long long)arg4 numAppsShown:(unsigned long long)arg5;
+ (void)_writeDataDictionaryToDefaults:(id)arg1 dataDictionary:(id)arg2;
+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1;
+ (void)logAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 userDefaults:(id)arg2;
+ (void)logCountedAppLaunchesToEventTracker;
+ (void)logCountedAppLaunchesToEventTracker:(id)arg1 homeScreenConfigCache:(id)arg2 userDefaults:(id)arg3;
+ (void)logCountedAppLaunchesToEventTracker:(id)arg1 homeScreenPage:(id)arg2 dataDictionary:(id)arg3;
+ (void)logCountedDockLaunchesToEventTracker:(id)arg1 dockAppList:(id)arg2 dataDictionary:(id)arg3;
+ (void)logNonAppPanelAppLaunchFromDock;
+ (void)logNonAppPanelAppLaunchFromDockWithUserDefaults:(id)arg1;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1;
+ (void)logNonAppPanelAppLaunchWithSBPageIndex:(unsigned long long)arg1 userDefaults:(id)arg2;

@end

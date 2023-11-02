
@interface HBXHealthAppPluginFactory : NSObject

+ (id)_createPluginAddDataViewControllerProvidingFromPluginBundle:(id)arg1;
+ (id)_createPluginAppDelegateFromPluginBundle:(id)arg1;
+ (id)_createPluginDataListDataProviderProvidingFromPluginBundle:(id)arg1;
+ (id)_loadBundleForPluginPath:(id)arg1;
+ (id)_loadPluginBundleForDisplayType:(id)arg1;
+ (id)_makeDataListViewControllerProvidingForDisplayType:(id)arg1;
+ (id)_pluginPathForDisplayType:(id)arg1;
+ (id)_pluginsDirectoryPath;
+ (Class)makeDataListDataProviderClassFromPluginName:(id)arg1 displayType:(id)arg2;
+ (id)makeDataListViewControllerForHealthStore:(id)arg1 displayType:(id)arg2 predicate:(id)arg3;

@end

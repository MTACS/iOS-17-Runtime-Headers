
@interface ACPluginLoader : NSObject

+ (id)_accountsPluginDirectoryURLs:(id)arg1 inAppleInternal:(bool)arg2;
+ (id)_pluginWithName:(id)arg1 inSubpath:(id)arg2 inAppleInternal:(bool)arg3;
+ (void)_populatePluginBundles:(id)arg1 atSubpath:(id)arg2 inAppleInternal:(bool)arg3;
+ (id)_validatedBundleAtURL:(id)arg1;
+ (id)pluginBundlesAtSubpath:(id)arg1;
+ (id)pluginWithName:(id)arg1 inSubpath:(id)arg2;

@end

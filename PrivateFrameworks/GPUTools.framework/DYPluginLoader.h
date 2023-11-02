
@interface DYPluginLoader : NSObject {
    NSMutableSet * _loadedPluginNames;
    bool  _loading;
}

+ (id)getLoadedPluginNames;
+ (id)loadGPUToolsPlugins;
+ (id)loadGPUToolsPluginsInMainBundleOnly:(bool)arg1;
+ (bool)loadPluginWithBundle:(id)arg1;
+ (id)loadPluginsInDirectory:(id)arg1 pathExtension:(id)arg2;
+ (id)loadPluginsInDirectory:(id)arg1 pathExtension:(id)arg2 matchingRegex:(id)arg3;
+ (id)loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2;
+ (id)loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2 matchingRegex:(id)arg3;
+ (id)sharedPluginLoader;

- (bool)_loadBundle:(id)arg1;
- (id)_loadPluginsInDirectory:(id)arg1 pathExtension:(id)arg2 matchingRegex:(id)arg3;
- (id)_loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2;
- (id)_loadPluginsWithProvider:(id)arg1 pathExtension:(id)arg2 matchingRegex:(id)arg3;
- (void)dealloc;
- (id)init;

@end

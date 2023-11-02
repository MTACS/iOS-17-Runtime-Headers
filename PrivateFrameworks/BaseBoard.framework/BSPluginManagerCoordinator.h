
@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary * _managersByBundleID;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)arg1;
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)arg1;

@end

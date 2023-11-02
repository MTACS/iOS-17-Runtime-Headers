
@interface PSUsageBundleManager : NSObject {
    NSDictionary * _bundleMap;
    NSMutableArray * _storageReporters;
    NSArray * _usageBundleApps;
}

- (void).cxx_destruct;
- (void)_loadUsageBundlesWithHandler:(id /* block */)arg1;
- (id)allUsageBundleApps;
- (void)vendUsageBundleAppsWithHandler:(id /* block */)arg1;

@end

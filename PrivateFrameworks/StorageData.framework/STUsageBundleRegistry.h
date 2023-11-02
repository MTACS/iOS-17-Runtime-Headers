
@interface STUsageBundleRegistry : NSObject {
    NSDictionary * _reporters;
    NSDictionary * _usageApps;
}

@property (retain) NSDictionary *reporters;
@property (retain) NSDictionary *usageApps;

- (void).cxx_destruct;
- (id)allAppsWithUsageBundles;
- (id)init;
- (id)loadBundlesForReporters:(id)arg1;
- (id)loadReporters;
- (id)reporters;
- (void)setReporters:(id)arg1;
- (void)setUsageApps:(id)arg1;
- (id)usageApps;
- (id)usageBundleForIdentifier:(id)arg1;

@end

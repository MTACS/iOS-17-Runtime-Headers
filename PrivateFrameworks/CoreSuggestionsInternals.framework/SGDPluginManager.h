
@interface SGDPluginManager : NSObject {
    NSDictionary * _plugins;
}

+ (void)_processHistoricalDataRequestsForPluginIdentifier:(id)arg1 result:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_processSearchableItem:(id)arg1 harvestMetrics:(id)arg2 userAction:(id)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)pluginIdentifiers;
- (void)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 completion:(id /* block */)arg4;
- (id)processSearchableItem:(id)arg1 harvestMetrics:(id)arg2;
- (id)processUserAction:(id)arg1 searchableItem:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(id /* block */)arg3;
- (void)setPlugins:(id)arg1;

@end

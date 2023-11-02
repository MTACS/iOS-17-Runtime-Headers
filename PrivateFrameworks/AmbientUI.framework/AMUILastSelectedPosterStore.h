
@interface AMUILastSelectedPosterStore : NSObject {
    AMAmbientDefaults * _ambientDefaults;
    NSMutableDictionary * _cachedLastSelectedConfigurations;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
}

+ (id)new;

- (void).cxx_destruct;
- (unsigned long long)_currentChargerIds;
- (unsigned long long)_maximumChargerIds;
- (void)_performWithSelectedConfigurationsForChargerIdentifier:(id)arg1 block:(id /* block */)arg2;
- (void)_performWithSelectedConfigurationsForChargerIdentifier:(id)arg1 onlyIfPresent:(bool)arg2 block:(id /* block */)arg3;
- (void)_synchronize;
- (id)init;
- (id)initWithAmbientDefaults:(id)arg1;
- (id)lastSelectedConfigurationUUIDForChargerIdentifier:(id)arg1 providerBundleIdentifier:(id)arg2;
- (void)setLastSelectedConfigurationUUID:(id)arg1 forChargerIdentifier:(id)arg2 providerBundleIdentifier:(id)arg3;

@end

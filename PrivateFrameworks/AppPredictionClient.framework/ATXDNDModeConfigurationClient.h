
@interface ATXDNDModeConfigurationClient : NSObject <ATXDNDModeConfigurationClientListenerDelegate> {
    NSDictionary * _cachedModeConfig;
    NSDictionary * _cachedModesByModeIdentifiers;
    NSDictionary * _cachedModesBySemanticType;
    DNDModeConfigurationService * _dndConfigurationService;
    DNDGlobalConfigurationService * _dndGlobalConfigurationService;
    bool  _isCacheValid;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    <DNDModeConfigurationServiceListener> * _updateListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_configuredModesBySemanticType;
- (id)_init;
- (id)appConfigurationsForModeIdentifier:(id)arg1 error:(id*)arg2;
- (unsigned long long)atxModeForDNDMode:(id)arg1;
- (unsigned long long)atxModeForDNDSemanticType:(long long)arg1;
- (id)configuredModes;
- (void)configuredModesDidChange;
- (id)debug_allModeDescriptions;
- (id)dndModeForATXMode:(unsigned long long)arg1;
- (id)dndModeForDNDModeWithUUID:(id)arg1;
- (id)dndModeForDNDModeWithUUID:(id)arg1 useCache:(bool)arg2;
- (id)dndModeUUIDForDNDModeIdentifier:(id)arg1;
- (id)dndModeUUIDForDNDModeSemanticType:(long long)arg1;
- (id)dndSemanticTypeForATXMode:(unsigned long long)arg1;
- (id)getAllModeConfigurationsWithoutCache;
- (id)iOSAppAllowListForMode:(long long)arg1;
- (id)iOSAppDenyListForMode:(long long)arg1;
- (id)iOSAppListForMode:(long long)arg1 configurationType:(unsigned long long)arg2;
- (id)iOSContactAllowListForMode:(long long)arg1;
- (id)iOSContactDenyListForMode:(long long)arg1;
- (id)iOSContactListForMode:(long long)arg1 configurationType:(unsigned long long)arg2;
- (void)invalidateCaches;
- (bool)isCloudSyncActive;
- (id)modeConfigurationForDNDModeWithUUID:(id)arg1;
- (id)modeConfigurationForDNDModeWithUUID:(id)arg1 useCache:(bool)arg2;
- (id)modesByModeIdentifiers;
- (void)refreshCachedConfigs;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end

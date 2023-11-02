
@interface ATXConfiguredModeService : NSObject <DNDModeConfigurationServiceListener> {
    ATXGenericFileBasedCache * _cache;
    DNDModeConfigurationService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)DNDModeConfigurationForActivityWithUUID:(id)arg1;
- (id)_DNDModeConfigurationForActivityWithUUID:(id)arg1 dndConfigs:(id)arg2;
- (id)_cacheAndReturnDNDModeConfigurationDictionary;
- (void)_cacheDNDModeConfigurationDictionary:(id)arg1;
- (void)_checkIfConfigurationOfCurrentModeChangedWithDNDConfigs:(id)arg1;
- (void)_createServiceIfNeeded;
- (bool)_isActivityTypeConfigured:(unsigned long long)arg1 uuid:(id*)arg2 allowsSmartEntry:(bool*)arg3 userModeName:(id*)arg4 dndConfigs:(id)arg5;
- (bool)_isActivityWithUUIDConfigured:(id)arg1 activityType:(unsigned long long*)arg2 allowsSmartEntry:(bool*)arg3 userModeName:(id*)arg4 dndConfigs:(id)arg5;
- (bool)_isSmartActivationEnabled:(id)arg1;
- (id)_modeConfigurationsReturningError:(id*)arg1;
- (id)_retrieveCachedDNDModeConfigurationDictionary;
- (void)_updateUserDefaultsForAnyNewlyAddedModesWithDNDConfigs:(id)arg1;
- (void)_updateUserDefaultsWithAnySmartActivationUpdatesWithDNDConfigs:(id)arg1;
- (id)init;
- (bool)isActivityTypeConfigured:(unsigned long long)arg1;
- (bool)isActivityTypeConfigured:(unsigned long long)arg1 uuid:(id*)arg2 allowsSmartEntry:(bool*)arg3 userModeName:(id*)arg4;
- (bool)isActivityWithUUIDConfigured:(id)arg1;
- (bool)isActivityWithUUIDConfigured:(id)arg1 activityType:(unsigned long long*)arg2 allowsSmartEntry:(bool*)arg3 userModeName:(id*)arg4;
- (void)modeConfigurationService:(id)arg1 didReceiveAvailableModesUpdate:(id)arg2;

@end

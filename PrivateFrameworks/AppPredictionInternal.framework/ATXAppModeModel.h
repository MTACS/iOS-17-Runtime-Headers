
@interface ATXAppModeModel : NSObject {
    ATXAppInterruptionsEventProvider * _appInterruptionsEventProvider;
    MLModel * _appModeModel;
    ATXAppNotificationEngagementEventProvider * _appNotificationEngagementEventProvider;
    ATXGlobalAppModeAffinityModel * _globalAppModeAffinityModel;
    unsigned long long  _mode;
    ATXModeAffinityModelsConstants * _modeAffinityModelsConstants;
    ATXModeEntityStore * _modeEntityStore;
    <ATXModeEntityEventProviderProtocol> * _modeEventProvider;
    ATXNotificationAndSuggestionDatastore * _notificationDatastore;
}

- (void).cxx_destruct;
- (void)addAppInterruptingSignalsForIdentifier:(id)arg1 toAppSpecificFeatures:(id)arg2;
- (void)addEntitySpecificFeaturesToAppFeatures:(id)arg1;
- (void)addGlobalModeAffinityPriorsForIdentifier:(id)arg1 toAppSpecificFeatures:(id)arg2;
- (void)addNotificationsSignalsForIdentifier:(id)arg1 toAppSpecificFeatures:(id)arg2;
- (id)featuresToModel:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1 modeEntityStore:(id)arg2 globalAppModeAffinityModel:(id)arg3;
- (id)loadAppModeCoreMLModel;
- (id)modelName;
- (double)scoreFromAppFeatures:(id)arg1;
- (id)scoredAppModeEntityWithAppFeatures:(id)arg1 bundleId:(id)arg2;
- (id)scoredEntities;

@end


@interface ATXFocusModeSignalsMetricLogger : NSObject {
    NSMutableDictionary * _cachedAppScores;
    NSMutableDictionary * _cachedAppScoresForDenyList;
    NSMutableDictionary * _cachedWidgetScores;
    ATXGlobalAppModeAffinityModel * _globalAppModeAffinityModel;
    ATXGlobalInterruptingAppModel * _globalInterruptingAppModel;
    ATXGlobalWidgetPopularityModel * _globalWidgetPopularityModel;
    ATXModeAffinityModelsConstants * _modeAffinityModelsConstants;
    ATXDNDModeConfigurationClient * _modeConfigClient;
    ATXModeEntityStore * _modeEntityStore;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
}

- (void).cxx_destruct;
- (void)addAppEntitySpecificFeatures:(id)arg1 toMetric:(id)arg2;
- (id)appScoresForDenyListForMode:(unsigned long long)arg1;
- (id)appScoresForMode:(unsigned long long)arg1;
- (id)fetchRelevantBundleIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 suggestedEntities:(id)arg2 candidateEntities:(id)arg3 currentEntities:(id)arg4;
- (id)init;
- (void)logFocusModeAppSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 xpcActivity:(id)arg2;
- (void)logFocusModeWidgetSignalsWithXPCActivity:(id)arg1;
- (unsigned long long)logWidgetSignalsForMode:(unsigned long long)arg1 modeAffinitySignals:(id)arg2 entitiesLogged:(unsigned long long)arg3;
- (id)metricFieldsToFeatureNames;
- (void)populateAppModeAffinitySignalsForMode:(unsigned long long)arg1 bundleId:(id)arg2 metric:(id)arg3;
- (void)populateAppModeDenyListSignalsForMode:(unsigned long long)arg1 bundleId:(id)arg2 metric:(id)arg3;
- (void)populateWidgetModeAffinitySignalsForMode:(unsigned long long)arg1 metric:(id)arg2 modeEntity:(id)arg3;
- (id)widgetScoresForMode:(unsigned long long)arg1;

@end

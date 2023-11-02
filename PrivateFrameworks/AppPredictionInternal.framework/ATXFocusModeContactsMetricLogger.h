
@interface ATXFocusModeContactsMetricLogger : NSObject {
    NSMutableDictionary * _cachedContactScores;
    NSMutableDictionary * _cachedContactScoresForDenyList;
    ATXModeAffinityModelsConstants * _modeAffinityModelsConstants;
    ATXDNDModeConfigurationClient * _modeConfigClient;
    ATXModeEntityTrialClientWrapper * _modeEntityTrialClientWrapper;
    ATXStableContactRepresentationDatastore * _stableContactRepresentationDatastore;
}

- (void).cxx_destruct;
- (void)addContactEntitySpecificFeatures:(id)arg1 toMetric:(id)arg2;
- (id)contactScoresForDenyListForMode:(unsigned long long)arg1;
- (id)contactScoresForMode:(unsigned long long)arg1;
- (id)fetchRelevantContactIdsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 suggestedEntities:(id)arg2 candidateEntities:(id)arg3 currentEntities:(id)arg4;
- (id)init;
- (void)logFocusModeContactSignalsWithModeConfigurationUIFlowLoggingEvent:(id)arg1 xpcActivity:(id)arg2;
- (id)metricFieldsToFeatureNames;
- (void)populateContactModeAffinitySignalsForMode:(unsigned long long)arg1 contactId:(id)arg2 metric:(id)arg3;
- (void)populateContactModeDenyListSignalsForMode:(unsigned long long)arg1 contactId:(id)arg2 metric:(id)arg3;

@end

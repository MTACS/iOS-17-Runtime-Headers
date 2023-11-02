
@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXFocusModeContactsMetricLogger * _focusModeContactsLogger;
    ATXFocusModeSignalsMetricLogger * _focusModeSignalsLogger;
    ATXModeConfigurationUIFlowLoggingBiomeStream * _modeConfigurationUIFlowLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFocusModeSignalsLogger:(id)arg1;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)arg1 focusModeSignalsLogger:(id)arg2;
- (void)logCompletion:(id)arg1;
- (void)logModeConfigurationUIFlowMetric;
- (void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)arg1;
- (id)modeConfigurationUIFlowBookmark;
- (unsigned long long)numEntitiesAdded:(id)arg1;
- (unsigned long long)numEntitiesRemoved:(id)arg1;
- (unsigned long long)numSuggestedEntitiesAdded:(id)arg1;
- (unsigned long long)numSuggestedEntitiesRemoved:(id)arg1;
- (void)writeBookmarkToFile:(id)arg1;

@end

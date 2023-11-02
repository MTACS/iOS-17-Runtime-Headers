
@interface ATXModeTransitionMetricsLogUploader : NSObject {
    ATXDNDModeConfigurationClient * _client;
    NSDictionary * _modeConfigurations;
    BMUserFocusComputedModeStream * _modeTransitionStream;
}

- (void).cxx_destruct;
- (void)_logModeTransitionMetricWithPreviousModeStart:(id)arg1 previousModeEnd:(id)arg2 currentModeStart:(id)arg3 matchingPreviousInferredModeEvent:(id)arg4 matchingCurrentInferredModeEvent:(id)arg5;
- (void)_logWithPreviousInferredModeEvent:(id)arg1 currentInferredModeEvent:(id)arg2 withDuration:(id)arg3;
- (id)_modeTransitionBookmark;
- (void)_populateInferredModeFieldsOnTheModeTransitionMetric:(id)arg1 withPreviousInferredModeEvent:(id)arg2 currentInferredModeEvent:(id)arg3 duration:(id)arg4;
- (bool)_previousModeEndEvent:(id)arg1 isContiguousWithModeStartEvent:(id)arg2;
- (id)_timeBasedMergedPublisher;
- (id)init;
- (id)initWithModeTransitionStream:(id)arg1;
- (id)matchingInferredModeEvent:(id)arg1 inferredModeEvents:(id)arg2;
- (id)processInferredModeEvents:(id)arg1 beforeTimestamp:(double)arg2;
- (void)uploadLogsToCoreAnalyticsWithXPCActivity:(id)arg1;

@end


@interface PSGInputSuggesterMetricsLogger : NSObject {
    PETEventTracker2 * _tracker;
}

- (void).cxx_destruct;
- (int)_errorTypeProto:(unsigned char)arg1;
- (void)_populatePredictionItems:(id)arg1 proto:(id)arg2;
- (void)_populateQueryFields:(id)arg1 proto:(id)arg2;
- (void)_populateTreatmentFields:(id)arg1 proto:(id)arg2;
- (void)_populateTriggerAttributeFields:(id)arg1 proto:(id)arg2;
- (void)_populateTriggerFields:(id)arg1 proto:(id)arg2;
- (int)_predictionDataSourceTypeProto:(unsigned char)arg1;
- (int)_triggerSourceTypeProto:(unsigned long long)arg1;
- (id)init;
- (id)initWithTracker:(id)arg1;
- (void)logEngagement:(id)arg1 request:(id)arg2 position:(unsigned long long)arg3 config:(id)arg4;
- (void)logError:(unsigned char)arg1 request:(id)arg2 trigger:(id)arg3 config:(id)arg4;
- (void)logImpression:(id)arg1 request:(id)arg2 config:(id)arg3;
- (void)logPrediction:(id)arg1 request:(id)arg2 latencyMillis:(double)arg3 config:(id)arg4;
- (void)logQuery:(id)arg1 config:(id)arg2;
- (void)logSpeedMetricForLocaleIdentifier:(id)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4 zkwConfig:(id)arg5 wordBoundaryConfig:(id)arg6;
- (void)logTrigger:(id)arg1 request:(id)arg2 config:(id)arg3;

@end


@interface HealthPlatformCore.RelevanceEngineMetricsBlockRecorder : NSObject <RERelevanceEngineMetricsRecorder> {
    void callback;
}

- (void).cxx_destruct;
- (bool)ignoreValidMetricCheck;
- (id)init;
- (void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;

@end

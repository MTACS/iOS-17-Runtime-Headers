
@interface REClockFaceMetricsSubmitter : NSObject <RERelevanceEngineMetricsRecorder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_runningInClockFace;
- (bool)_runningInTest;
- (bool)_shouldRecordMetrics;
- (void)recordCallibrationCurveMetrics:(id)arg1 forInteraction:(id)arg2;
- (void)recordTrainingMetrics:(id)arg1 forInteraction:(id)arg2;

@end


@protocol HLOxygenSaturationSessionDelegate <NSObject>

@required

- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 didEndForReason:(unsigned long long)arg2 measurement:(HLOxygenSaturationMeasurement *)arg3;
- (void)oxygenSaturationSession:(HLOxygenSaturationSession *)arg1 feedbackDidChange:(unsigned long long)arg2;

@end

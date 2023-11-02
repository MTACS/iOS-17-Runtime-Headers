
@interface TRISetupAssistantFetchTelemetryGenerator : NSObject {
    long long  _latencyMilliseconds;
    NSArray * _telemetry;
}

- (void).cxx_destruct;
- (id)initWithDeadlineTimestamp:(id)arg1 referenceDate:(id)arg2 existingTelemetry:(id)arg3;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;

@end

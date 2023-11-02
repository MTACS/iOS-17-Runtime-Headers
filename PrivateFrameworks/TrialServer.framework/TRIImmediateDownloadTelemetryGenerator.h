
@interface TRIImmediateDownloadTelemetryGenerator : NSObject {
    bool  _allowExpensiveNetworking;
    long long  _latencyMilliseconds;
    NSArray * _telemetry;
}

- (void).cxx_destruct;
- (id)initWithLatencyMilliseconds:(long long)arg1 allowExpensiveNetworking:(bool)arg2 existingTelemetry:(id)arg3;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;

@end

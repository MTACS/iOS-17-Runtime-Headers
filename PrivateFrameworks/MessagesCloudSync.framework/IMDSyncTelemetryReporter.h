
@interface IMDSyncTelemetryReporter : NSObject {
    IMDSyncTelemetryReporterInternal * _telemetryReporter;
}

- (void).cxx_destruct;
- (id)init;
- (void)postMessage:(id)arg1 category:(long long)arg2;

@end

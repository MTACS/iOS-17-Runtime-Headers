
@interface IMDSyncTelemetryReporterInternal : NSObject {
    void reporter;
    void reportingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (bool)postMessage:(id)arg1 category:(long long)arg2 error:(id*)arg3;

@end

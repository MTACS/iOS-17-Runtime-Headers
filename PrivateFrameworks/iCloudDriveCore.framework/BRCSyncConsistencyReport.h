
@interface BRCSyncConsistencyReport : NSObject {
    NSError * _lastError;
    NSArray * _telemetryErrorEvents;
    NSArray * _telemetryWarningEvents;
    bool  _wasAbleToRun;
}

@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) NSArray *telemetryErrorEvents;
@property (nonatomic, readonly) NSArray *telemetryWarningEvents;
@property (nonatomic, readonly) bool wasAbleToRun;

+ (void)_finishReport:(id)arg1 session:(id)arg2 temporaryDBURL:(id)arg3 mountFD:(int)arg4 completionHandler:(id /* block */)arg5;
+ (void)cleanupApfsSnapshotWithMountFD:(int)arg1;
+ (void)cleanupApfsSnapshotWithMountPath:(id)arg1;
+ (void)generateReportWithSession:(id)arg1 mangledIDs:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)lastError;
- (id)telemetryErrorEvents;
- (id)telemetryWarningEvents;
- (bool)wasAbleToRun;

@end

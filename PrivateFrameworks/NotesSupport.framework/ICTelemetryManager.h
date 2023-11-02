
@interface ICTelemetryManager : NSObject

+ (void)postBasicEvent:(unsigned long long)arg1;
+ (void)postFetchDatabaseChangesTelemetryWithReason:(id)arg1;
+ (void)postFetchZoneChangesTelemetryWithReason:(id)arg1;
+ (void)postFullSyncTelemetryWithReason:(id)arg1;
+ (void)postOneTimeBasicEvent:(unsigned long long)arg1;
+ (id)sharedManager;
+ (id)telemetryQueue;
+ (id)telemetryTuples;
+ (void)waitUntilAllPendingTelemetryHasBeenSent;

- (void)postOneTimeTelemetryEvent:(unsigned long long)arg1 serviceName:(id)arg2 payload:(id)arg3 token:(id)arg4;
- (void)postTelemetryEvent:(unsigned long long)arg1 serviceName:(id)arg2 payload:(id)arg3;

@end

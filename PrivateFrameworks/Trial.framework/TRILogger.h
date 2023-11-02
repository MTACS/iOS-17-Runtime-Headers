
@interface TRILogger : NSObject {
    TRIClient * _client;
    NSArray * _logHandlers;
    NSObject<OS_dispatch_queue> * _loggingQueue;
    int  _projectId;
}

- (void).cxx_destruct;
- (void)_dispatchLogEvent:(id)arg1;
- (unsigned long long)_incrementedLogEventCount;
- (id)init;
- (id)initWithClient:(id)arg1 projectId:(int)arg2 logHandlers:(id)arg3;
- (id)initWithProjectId:(int)arg1;
- (id)initWithProjectId:(int)arg1 logHandlers:(id)arg2;
- (void)logEvent:(id)arg1;
- (void)logWithMLRuntimeDimensions:(id)arg1 metrics:(id)arg2 factorState:(id)arg3;
- (void)logWithNamespaceName:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3;
- (void)logWithProjectNameAndTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 trialSystemTelemetry:(id)arg4;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3;
- (void)logWithTrackingId:(id)arg1 logLevel:(long long)arg2 message:(id)arg3 args:(char *)arg4;
- (void)logWithTrackingId:(id)arg1 message:(id)arg2;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2;
- (void)logWithTrackingId:(id)arg1 metric:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 systemDimensions:(id)arg4 trialSystemTelemetry:(id)arg5;
- (void)logWithTrackingId:(id)arg1 metrics:(id)arg2 dimensions:(id)arg3 trialSystemTelemetry:(id)arg4;
- (id)messageWithOneofField:(id)arg1 withName:(id)arg2;

@end

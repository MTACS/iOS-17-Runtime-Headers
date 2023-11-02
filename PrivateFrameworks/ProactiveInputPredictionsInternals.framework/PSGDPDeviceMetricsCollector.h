
@interface PSGDPDeviceMetricsCollector : NSObject {
    IDSService * _idsService;
    NSObject<OS_dispatch_queue> * _queue;
    SGQuickResponsesStore * _store;
    <SGXPCActivityManagerProtocol> * _xpcActivityManager;
}

+ (id)getActiveTrialInformationWithWithXPCActivityManager:(id)arg1 activity:(id)arg2;
+ (id)getPrefixFromRolloutID:(id)arg1 factorPackId:(id)arg2 experimentId:(id)arg3 treatmentId:(id)arg4;
+ (id /* block */)onCompletionWithXPCActivityManager:(id)arg1 activity:(id)arg2 engagementMetrics:(id)arg3 idsService:(id)arg4 destinationDevice:(id)arg5;
+ (id /* block */)onDeltaRowWithXPCActivityManager:(id)arg1 activity:(id)arg2 engagementMetrics:(id)arg3;
+ (bool)recordEngagementMetrics:(id)arg1 selectedRecorder:(id)arg2 ignoredRecorder:(id)arg3;
+ (bool)recordResponse:(id)arg1 numTimesToLog:(unsigned long long)arg2 recorder:(id)arg3 prefix:(id)arg4;
+ (id)recorderForKey:(id)arg1;
+ (bool)sendEngagementToDPUsingData:(id)arg1;

- (void).cxx_destruct;
- (bool)collectDeviceQREngagement:(id)arg1;
- (id)initAsDelegate;
- (id)initWithActivityManager:(id)arg1;
- (id)initWithActivityManager:(id)arg1 idsService:(id)arg2 queue:(id)arg3 store:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (bool)syncQREngagementToPairedDeviceWithActivity:(id)arg1;

@end

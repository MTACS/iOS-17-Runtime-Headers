
@protocol PowerUISignalMonitor <NSObject>

@required

+ (id)monitorWithDelegate:(id <PowerUISignalMonitorDelegate>)arg1;

- (NSDate *)requiredFullChargeDate;
- (unsigned long long)signalID;
- (void)startMonitoring;
- (void)stopMonitoring;

@optional

+ (id)monitorWithDelegate:(id <PowerUISignalMonitorDelegate>)arg1 trialManager:(PowerUITrialManager *)arg2 withContext:(id <_CDLocalContext>)arg3 withKnowledgeStore:(id <_DKKnowledgeQuerying>)arg4;
+ (id)monitorWithDelegate:(id <PowerUISignalMonitorDelegate>)arg1 withContext:(id <_CDLocalContext>)arg2 withKnowledgeStore:(id <_DKKnowledgeQuerying>)arg3;

- (NSArray *)detectedSignals;

@end

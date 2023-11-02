
@interface MTMetrics : NSObject {
    <NAScheduler> * _serializer;
}

@property (nonatomic, retain) <NAScheduler> *serializer;

+ (id)_sharedPublicMetrics;

- (void).cxx_destruct;
- (id)init;
- (void)logAlarmAdded:(bool)arg1;
- (void)logAlarmDeleted:(bool)arg1;
- (void)logAlarmDismissAction:(unsigned long long)arg1;
- (void)logAlarmSnoozeAction:(unsigned long long)arg1;
- (void)logAlarmUpdated:(bool)arg1;
- (void)logMultipleTimersAdded:(id)arg1;
- (void)logSyncCompleted;
- (void)logSyncFailedWithError:(id)arg1;
- (void)logTimerAdded;
- (void)logTimerDeleted;
- (void)logTimerDismissed;
- (void)logTimerRepeated;
- (void)logTimerUpdated;
- (id)serializer;
- (void)setSerializer:(id)arg1;

@end


@protocol PowerUISignalMonitorDelegate <NSObject>

@required

- (void)monitor:(id <PowerUISignalMonitor>)arg1 maySuggestNewFullChargeDeadline:(NSDate *)arg2;
- (void)monitorMayInvalidateDEoCCache:(id <PowerUISignalMonitor>)arg1;
- (void)startAllMonitoring;
- (void)stopAllMonitoring;

@end

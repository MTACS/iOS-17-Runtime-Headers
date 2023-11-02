
@interface MTAlarmSyncDataModel : NSObject <MTAgentDiagnosticDelegate, MTAlarmObserver, MTSource, MTSyncDataModel> {
    MTAlarmStorage * _alarmStorage;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <NAScheduler> * _serializer;
    MTMetrics * _syncMetrics;
    MTSyncServiceManager * _syncServiceManager;
}

@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTMetrics *syncMetrics;
@property (nonatomic, retain) MTSyncServiceManager *syncServiceManager;

+ (id /* block */)defaultBlock;

- (void).cxx_destruct;
- (void)_performAction:(id)arg1;
- (void)_performDismiss:(id)arg1;
- (void)_performSnooze:(id)arg1;
- (void)_setupSyncManagerWithBlock:(id /* block */)arg1;
- (id)alarmStorage;
- (void)applyChange:(id)arg1;
- (id)dataFileName;
- (id)gatherDiagnostics;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 syncServiceManagerBlock:(id /* block */)arg3 serializer:(id)arg4 serialQueue:(id)arg5;
- (bool)isFromOtherDevice;
- (void)printDiagnostics;
- (void)resetDataStore;
- (id)serialQueue;
- (id)serializer;
- (void)setAlarmStorage:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSyncMetrics:(id)arg1;
- (void)setSyncServiceManager:(id)arg1;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)sourceIdentifier;
- (void)startSyncServices;
- (void)stopSyncServices;
- (id)syncMetrics;
- (id)syncServiceManager;

@end

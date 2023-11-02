
@interface PowerUIAlarmSignalMonitor : NSObject <PowerUISignalMonitor> {
    MTAlarmManager * _alarmManager;
    <PowerUISignalMonitorDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) MTAlarmManager *alarmManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;
+ (id)monitorWithDelegate:(id)arg1 trialManager:(id)arg2 withContext:(id)arg3 withKnowledgeStore:(id)arg4;

- (void).cxx_destruct;
- (id)alarmManager;
- (id)delegate;
- (id)detectedSignals;
- (id)initWithDelegate:(id)arg1 trialManager:(id)arg2 withContext:(id)arg3 withKnowledgeStore:(id)arg4;
- (id)log;
- (id)nextAlarm;
- (id)nextLocalAlarm;
- (id)requiredFullChargeDate;
- (void)setAlarmManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (unsigned long long)signalID;
- (void)sourceInformationChangedNotification:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end


@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor> {
    EKEventStore * _calendar;
    <PowerUISignalMonitorDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) EKEventStore *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PowerUISignalMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)monitorWithDelegate:(id)arg1;
+ (id)monitorWithDelegate:(id)arg1 trialManager:(id)arg2 withContext:(id)arg3 withKnowledgeStore:(id)arg4;

- (void).cxx_destruct;
- (id)calendar;
- (id)delegate;
- (id)detectedSignals;
- (id)initWithDelegate:(id)arg1 trialManager:(id)arg2 withContext:(id)arg3 withKnowledgeStore:(id)arg4;
- (bool)isEventEligible:(id)arg1 AtTime:(id)arg2;
- (id)log;
- (id)nextFlightEventWithEventIDs:(id)arg1;
- (id)nextRelevantDeadlineWithEventIDs:(id)arg1;
- (id)requiredFullChargeDate;
- (void)setCalendar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (unsigned long long)signalID;
- (void)sourceInformationChangedNotification:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)upcomingEventIDs;

@end

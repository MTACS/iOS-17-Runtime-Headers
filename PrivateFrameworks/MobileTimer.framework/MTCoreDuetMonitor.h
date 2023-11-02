
@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver> {
    NSMutableDictionary * _alarmStatesByAlarmID;
    <MTAlarmStorage> * _alarmStorage;
    NSMutableDictionary * _alarmsByID;
    _CDClientContext * _context;
    _DKKnowledgeStore * _knowledgeStore;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *alarmStatesByAlarmID;
@property (nonatomic, readonly) <MTAlarmStorage> *alarmStorage;
@property (nonatomic, readonly) NSMutableDictionary *alarmsByID;
@property (nonatomic, readonly) _CDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _DKKnowledgeStore *knowledgeStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_writeAlarmToKnowledgeStore:(id)arg1 category:(id)arg2;
- (void)_queue_writeCurrentStateToContextStore;
- (void)_queue_writeNextAlarmStateToContextStore:(id)arg1;
- (id)alarmStatesByAlarmID;
- (id)alarmStorage;
- (id)alarmsByID;
- (id)context;
- (void)handleSystemReady;
- (id)initWithAlarmStorage:(id)arg1;
- (id)knowledgeStore;
- (id)metadataForAlarm:(id)arg1;
- (id)serialQueue;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)updateAlarmCaches:(id)arg1;
- (void)updateLastModifiedDateForAlarms:(id)arg1;
- (void)updateStateForAlarm:(id)arg1 alarmEvent:(unsigned long long)arg2;
- (void)updateStateForNextAlarm:(id)arg1;
- (void)writeAlarmEventToBiome:(id)arg1 ofType:(unsigned long long)arg2;
- (void)writeAlarmEventsToBiome:(id)arg1 ofType:(unsigned long long)arg2;
- (void)writeAlarmToKnowledgeStore:(id)arg1 alarmEvent:(unsigned long long)arg2;
- (void)writeAlarmUpdatedEventForAlarms:(id)arg1;

@end

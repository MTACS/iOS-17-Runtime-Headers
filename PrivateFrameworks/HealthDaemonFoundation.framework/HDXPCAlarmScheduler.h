
@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject> {
    NSMapTable * _alarms;
    NSMutableSet * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _unitTest_schedulerObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_schedulerObserver;

- (void).cxx_destruct;
- (void)_queue_handleEvent:(id)arg1;
- (void)_queue_handleXPCEvent:(id)arg1;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_scheduleEvent:(id)arg1;
- (void)_queue_unscheduleEventWithName:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)diagnosticDescription;
- (id)init;
- (void)removeAlarm:(id)arg1;
- (void)scheduleEvent:(id)arg1;
- (void)setUnitTest_schedulerObserver:(id /* block */)arg1;
- (id /* block */)unitTest_schedulerObserver;
- (void)unittest_fireEvent:(id)arg1;
- (void)unscheduleEventWithName:(id)arg1;

@end

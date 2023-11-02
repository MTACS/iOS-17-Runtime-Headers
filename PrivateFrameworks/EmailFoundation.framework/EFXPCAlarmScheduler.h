
@interface EFXPCAlarmScheduler : NSObject {
    NSMapTable * _alarms;
    NSMutableSet * _pendingEvents;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _test_schedulerObserver;
}

@property (nonatomic, copy) id /* block */ test_schedulerObserver;

+ (id)log;

- (void).cxx_destruct;
- (id)_init;
- (void)_queue_handleEvent:(id)arg1;
- (void)_queue_handleXPCEvent:(id)arg1;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_scheduleEvent:(id)arg1;
- (void)_queue_unscheduleEventWithName:(id)arg1;
- (void)addAlarm:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (id)initForTesting;
- (id)initGlobalInstance;
- (void)removeAlarm:(id)arg1;
- (void)scheduleEvent:(id)arg1;
- (void)setTest_schedulerObserver:(id /* block */)arg1;
- (void)test_fireEvent:(id)arg1;
- (id /* block */)test_schedulerObserver;
- (void)unscheduleEventWithName:(id)arg1;

@end

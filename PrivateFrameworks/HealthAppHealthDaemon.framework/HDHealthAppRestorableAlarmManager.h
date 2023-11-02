
@interface HDHealthAppRestorableAlarmManager : NSObject <HDHealthDaemonReadyObserver> {
    _HKWeakObserversMap * _alarmHandlers;
    HDDaemon * _daemon;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
}

@property (nonatomic, retain) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_removeAlarmEvent:(id)arg1;
- (void)_queue_scheduleAlarmEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)_rescheduleAlarmEvent:(id)arg1 dueDate:(id)arg2 completion:(id /* block */)arg3;
- (void)_scheduleAlarmEventWithHandler:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)createAlarmEventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (id)initWithDaemon:(id)arg1;
- (id)queue;
- (void)removeAlarmEvent:(id)arg1;
- (bool)removeAlarmEventWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)rescheduleAlarmEvent:(id)arg1 dueDate:(id)arg2;
- (void)rescheduleAlarmEvent:(id)arg1 dueDate:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleAlarmEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)scheduleAlarmEventWithHandler:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3;
- (void)scheduleAlarmEventWithHandler:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setDaemon:(id)arg1;
- (void)setHandlerForAlarmEvent:(id)arg1 handler:(id)arg2;

@end

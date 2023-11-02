
@interface MTTimerScheduler : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTScheduledListDelegate, MTTimerObserver> {
    id /* block */  _currentDateProvider;
    <MTPersistence> * _defaults;
    <MTTimerSchedulerDelegate> * _delegate;
    <MTNotificationCenter> * _notificationCenter;
    MTScheduledList * _scheduledTimers;
    <MTSchedulingDelegate> * _schedulingDelegate;
    <NAScheduler> * _serializer;
    <MTTimerStorage> * _storage;
    <MTTaskScheduler> * _taskScheduler;
}

@property (nonatomic, readonly, copy) id /* block */ currentDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MTPersistence> *defaults;
@property (nonatomic) <MTTimerSchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MTNotificationCenter> *notificationCenter;
@property (nonatomic, readonly) MTScheduledList *scheduledTimers;
@property (nonatomic, readonly) <MTSchedulingDelegate> *schedulingDelegate;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) <MTTimerStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTTaskScheduler> *taskScheduler;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)arg1;

- (void).cxx_destruct;
- (void)_fireScheduledTimer:(id)arg1 firedDate:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(id /* block */)arg1;
- (id)_queue_lastTimerTriggerDate;
- (id)_queue_nextScheduledTimer;
- (id)_queue_nextTimer;
- (void)_queue_rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)_queue_scheduleTimers:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_queue_setLastTimerTriggerDate:(id)arg1;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(id /* block */)arg1;
- (void)_queue_unregisterTimer;
- (void)_queue_unscheduleTimers:(id)arg1;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(id /* block */)arg1;
- (id /* block */)currentDateProvider;
- (id)defaults;
- (id)delegate;
- (id)gatherDiagnostics;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* block */)arg3;
- (bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(id /* block */)arg7;
- (id)nextTimer;
- (void)nextTimerDidChange:(id)arg1;
- (id)nextTriggerDate;
- (id)notificationCenter;
- (void)printDiagnostics;
- (void)rescheduleTimers;
- (void)rescheduleTimersWithCompletion:(id /* block */)arg1;
- (void)scheduleTimers:(id)arg1;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)scheduledTimers;
- (id)schedulingDelegate;
- (id)serializer;
- (void)setDefaults:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (id)sourceIdentifier;
- (id)storage;
- (id)taskScheduler;
- (void)unscheduleTimers:(id)arg1;

@end

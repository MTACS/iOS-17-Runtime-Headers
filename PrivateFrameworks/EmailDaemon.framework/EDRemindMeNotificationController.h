
@interface EDRemindMeNotificationController : NSObject <EDMessageChangeHookResponder, EDRemindMeNotificationControllerEventDelegate, EFLoggable> {
    <EDRemindMeNotificationControllerAlarmDateProvider> * _alarmDateProvider;
    NSObject<OS_dispatch_queue> * _alarmQueue;
    <EDRemindMeNotificationControllerEventDelegate> * _eventDelegate;
    EDPersistenceHookRegistry * _hookRegistry;
    EDMessagePersistence * _messagePersistence;
    EFLocked * _observers;
    EDQueryCreator * _readLaterQueryCreator;
    EFXPCAlarm * _xpcAlarm;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <EDRemindMeNotificationControllerEventDelegate> *eventDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EFXPCAlarm *xpcAlarm;

+ (id)localizedRemindMeNotificationTitle;
+ (id)log;

- (void).cxx_destruct;
- (void)_alarmFired;
- (id)_fetchMessagesToNotifyWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)_notify:(id)arg1;
- (void)_updateAlarmStartDate:(id)arg1;
- (void)_updateAlarmUpdatedMessages:(id)arg1 readLaterDate:(id)arg2 startDate:(id)arg3 changeIsRemote:(bool)arg4;
- (id)addObserver:(id)arg1;
- (void)controller:(id)arg1 scheduleAlarmForMessage:(id)arg2 date:(id)arg3;
- (id)eventDelegate;
- (id)initWithHookRegistry:(id)arg1 messagePersistence:(id)arg2 alarmDateProvider:(id)arg3 eventDelegate:(id)arg4 alarmScheduler:(id)arg5;
- (id)initWithHookRegistry:(id)arg1 messagePersistence:(id)arg2 alarmScheduler:(id)arg3;
- (id)observers;
- (void)performDelayedTasks;
- (void)persistenceDidChangeReadLaterDate:(id)arg1 messages:(id)arg2 changeIsRemote:(bool)arg3 generationWindow:(id)arg4;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)resetRemindMeAlarmIfNeeded;
- (void)test_tearDown;
- (void)test_waitForUpdates;
- (id)xpcAlarm;

@end

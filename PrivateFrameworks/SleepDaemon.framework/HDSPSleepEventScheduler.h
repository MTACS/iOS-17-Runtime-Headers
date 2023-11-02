
@interface HDSPSleepEventScheduler : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPEventScheduleDelegate, HDSPSleepEventDelegate, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    HKSPObserverSet * _eventHandlers;
    NSHashTable * _eventProviders;
    HKSPSleepEvent * _lastStandardSleepEvent;
    HKSPLimitingScheduler * _limitingScheduler;
    <HKSPMutexProvider> * _mutexProvider;
    NSHashTable * _pendingEventProviders;
    <HDSPEventScheduler> * _scheduler;
    HDSPSleepEventList * _sleepEvents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (nonatomic, readonly) HKSPObserverSet *eventHandlers;
@property (nonatomic, readonly) NSHashTable *eventProviders;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastEventTriggerDate;
@property (nonatomic, retain) HKSPSleepEvent *lastStandardSleepEvent;
@property (nonatomic, readonly) HKSPLimitingScheduler *limitingScheduler;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) NSHashTable *pendingEventProviders;
@property (nonatomic, readonly) <HDSPEventScheduler> *scheduler;
@property (nonatomic, readonly) HDSPSleepEventList *sleepEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allSleepEvents;
- (void)_enqueueHandleOverdueEventsTask;
- (void)_enqueueSchedulePendingEventsTask;
- (void)_handleOverdueEvents;
- (void)_loadLastStandardSleepEvent;
- (void)_lock_rescheduleEvents;
- (bool)_lock_shouldScheduleEvents;
- (void)_lock_updateLastStandardSleepEvent:(id)arg1;
- (void)_schedulePendingEvents;
- (bool)_shouldNotifyHandler:(id)arg1 forEvent:(id)arg2;
- (void)_withLock:(id /* block */)arg1;
- (void)addEventHandler:(id)arg1;
- (void)addEventProvider:(id)arg1;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventHandlers;
- (void)eventProviderCancelledEvents:(id)arg1;
- (void)eventProviderHasUpcomingEvents:(id)arg1;
- (id)eventProviders;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 schedulerProvider:(id /* block */)arg2 limitingScheduler:(id)arg3;
- (id)lastEventTriggerDate;
- (id)lastStandardSleepEvent;
- (id)limitingScheduler;
- (id)mutexProvider;
- (id)pendingEventProviders;
- (void)removeEventHandler:(id)arg1;
- (void)removeEventProvider:(id)arg1;
- (void)rescheduleEvents;
- (void)scheduledEventIsDue;
- (id)scheduler;
- (void)setLastEventTriggerDate:(id)arg1;
- (void)setLastStandardSleepEvent:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEvents;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepScheduleModel:(id)arg2;

@end

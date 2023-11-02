
@interface HDRestorableAlarm : NSObject <HDDiagnosticObject> {
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _eventHandlerQueue;
    id /* block */  _eventsHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableSet * _outstandingEventIdentifiers;
    HDRestorableAlarmScheduler * _scheduler;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDXPCAlarm *systemScheduler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (id)allScheduledEventsWithError:(id*)arg1;
- (void)beginReceivingEventsWithHandler:(id /* block */)arg1;
- (void)checkForDueEventsWithCompletion:(id /* block */)arg1;
- (id)clientIdentifier;
- (id)description;
- (id)diagnosticDescription;
- (id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3;
- (id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3;
- (void)eventsDidFire:(id)arg1;
- (id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)invalidate;
- (bool)removeAllEventsWithError:(id*)arg1;
- (bool)removeEvents:(id)arg1 error:(id*)arg2;
- (id)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id*)arg2;
- (bool)scheduleEvents:(id)arg1 error:(id*)arg2;
- (id)systemScheduler;

// Image: /System/Library/PrivateFrameworks/HealthMedicationsDaemonPlugin.framework/HealthMedicationsDaemonPlugin

- (id)medicationExpirationEventWithScheduleItemIdentifier:(id)arg1 dueDate:(id)arg2;
- (id)medicationNotificationEventWithScheduleItem:(id)arg1 dueDate:(id)arg2 isFollowUp:(bool)arg3 isCritical:(bool)arg4;

@end

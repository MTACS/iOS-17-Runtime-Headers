
@interface WFTriggerEventQueue : NSObject <WFTriggerEventRunnerDelegate, WFTriggerUserNotificationManagerDelegate> {
    <WFDatabaseProvider> * _databaseProvider;
    WFTriggerUserNotificationManager * _notificationManager;
    WFTriggerNotificationScheduler * _notificationScheduler;
    NSObject<OS_dispatch_queue> * _queue;
    WFTriggerBootManager * _triggerBootManager;
    WFTriggerEventRunner * _triggerEventRunner;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFTriggerUserNotificationManager *notificationManager;
@property (nonatomic, readonly) WFTriggerNotificationScheduler *notificationScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFTriggerBootManager *triggerBootManager;
@property (nonatomic, readonly) WFTriggerEventRunner *triggerEventRunner;

+ (double)rateLimitingTimeoutForTrigger:(id)arg1 runEvents:(id)arg2;
+ (bool)shouldRunTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)configuredTriggerForIdentifier:(id)arg1 workflowReference:(id*)arg2 error:(id*)arg3;
- (id)databaseProvider;
- (id)databaseWithError:(id*)arg1;
- (bool)deleteTriggerEvent:(id)arg1 error:(id*)arg2;
- (void)didFinishRunningWithError:(id)arg1 cancelled:(bool)arg2 trigger:(id)arg3 runEvent:(id)arg4;
- (void)disableTriggersWithIdentifiers:(id)arg1;
- (void)enqueueTriggerWithIdentifier:(id)arg1 eventInfo:(id)arg2 force:(bool)arg3 completion:(id /* block */)arg4;
- (void)handleRemovedIgnoredNotifications:(id)arg1;
- (id)initWithDatabaseProvider:(id)arg1 notificationManager:(id)arg2 notificationScheduler:(id)arg3 triggerBootManager:(id)arg4;
- (bool)isTriggerEventStale:(id)arg1;
- (void)logMetricForTrigger:(id)arg1;
- (id)nextTriggerEventWithError:(id*)arg1;
- (id)notificationManager;
- (void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
- (void)notificationManager:(id)arg1 didFailToPostNotificationPromptWithTriggerIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
- (void)notificationManager:(id)arg1 didRequestDisablementOfTriggersWithIdentifiers:(id)arg2;
- (void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
- (id)notificationScheduler;
- (unsigned long long)numberOfEventsInQueueWithConfirmationOnly:(bool)arg1;
- (id)queue;
- (void)removeAllStaleTriggerEventsIgnoringValidIDs:(id)arg1;
- (void)removePendingTriggerEventsWithEventIDs:(id)arg1;
- (void)resume;
- (void)resumeWithConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 eventInfo:(id)arg3;
- (void)runWithConfiguredTrigger:(id)arg1 workflowReference:(id)arg2 eventInfo:(id)arg3;
- (void)setConfirmedForTriggerEventIDs:(id)arg1 error:(id*)arg2;
- (bool)shouldRunEmailOrMessageTrigger:(id)arg1 forEvent:(id)arg2 runEvents:(id)arg3 error:(id*)arg4;
- (id)triggerBootManager;
- (id)triggerEventForConfiguredTrigger:(id)arg1 eventInfo:(id)arg2 confirmed:(bool)arg3 error:(id*)arg4;
- (id)triggerEventRunner;

@end

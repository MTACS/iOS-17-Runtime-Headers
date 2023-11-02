
@interface WFTriggerNotificationScheduler : NSObject {
    <WFDatabaseProvider> * _databaseProvider;
    NSObject<OS_dispatch_queue> * _queue;
    WFTriggerUserNotificationManager * _userNotificationManager;
}

@property (nonatomic, readonly) <WFDatabaseProvider> *databaseProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFTriggerUserNotificationManager *userNotificationManager;

+ (bool)shortenTimeIntervalsForTesting;

- (void).cxx_destruct;
- (void)cancelActivitiesFromTrigger:(id)arg1;
- (void)cancelActivitiesFromTriggerIdentifier:(id)arg1;
- (void)cancelAllActivitiesFromTriggers:(id)arg1;
- (id)databaseProvider;
- (id)initWithUserNotificationManager:(id)arg1 databaseProvider:(id)arg2;
- (id)initialRunDateForConfiguredTrigger:(id)arg1;
- (void)migrateAllTriggersCreatedBeforeBackgroundRunningWithDatabase:(id)arg1;
- (void)postBackgroundRunningNotificationForTrigger:(id)arg1;
- (id)queue;
- (void)registerConfiguredTrigger:(id)arg1 delay:(id)arg2;
- (void)registerWithDatabaseProvider:(id)arg1;
- (void)scheduleTriggerForNotifications:(id)arg1;
- (int)updateTriggerNotificationLevels:(id)arg1 database:(id)arg2;
- (id)userNotificationManager;

@end

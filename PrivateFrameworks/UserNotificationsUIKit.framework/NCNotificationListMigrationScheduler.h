
@interface NCNotificationListMigrationScheduler : NSObject {
    NSDate * _currentlyScheduledDate;
    NSDateFormatter * _dateFormatter;
    <NCNotificationListMigrationSchedulerDelegate> * _delegate;
    NSDate * _migrationDateForNotificationDigest;
    NSMutableDictionary * _migrationDatesForNotificationRequests;
    PCPersistentTimer * _scheduleTimer;
    NSObject<OS_dispatch_queue> * _scheduleTimerQueue;
}

@property (nonatomic, retain) NSDate *currentlyScheduledDate;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (nonatomic) <NCNotificationListMigrationSchedulerDelegate> *delegate;
@property (nonatomic, copy) NSDate *migrationDateForNotificationDigest;
@property (nonatomic, retain) NSMutableDictionary *migrationDatesForNotificationRequests;
@property (nonatomic, retain) PCPersistentTimer *scheduleTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scheduleTimerQueue;
@property (nonatomic, readonly, copy) NSDate *upcomingScheduledMigrationDate;

- (void).cxx_destruct;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (void)_migrationTimerFiredForTimer:(id)arg1;
- (id)_nextScheduleDateForMigration;
- (id)_notificationRequestMatchingRequest:(id)arg1;
- (void)_scheduleMigrationTimerForDate:(id)arg1;
- (void)_sendDigestMigrationSignalIfNecessary;
- (void)_sendNotificationRequestMigrationSignalIfNecessary;
- (void)_updateMigrationScheduleTimer;
- (void)addMigrationForNotificationRequests:(id)arg1 forDate:(id)arg2;
- (id)currentlyScheduledDate;
- (id)dateFormatter;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)migrationDateForNotificationDigest;
- (id)migrationDatesForNotificationRequests;
- (void)removeMigrationForNotificationRequest:(id)arg1;
- (id)scheduleTimer;
- (id)scheduleTimerQueue;
- (void)setCurrentlyScheduledDate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMigrationDateForNotificationDigest:(id)arg1;
- (void)setMigrationDatesForNotificationRequests:(id)arg1;
- (void)setScheduleTimer:(id)arg1;
- (void)setScheduleTimerQueue:(id)arg1;
- (id)upcomingScheduledMigrationDate;

@end

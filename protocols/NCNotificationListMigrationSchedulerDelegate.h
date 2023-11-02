
@protocol NCNotificationListMigrationSchedulerDelegate <NSObject>

@required

- (void)notificationListMigrationScheduler:(NCNotificationListMigrationScheduler *)arg1 requestsMigratingNotificationRequests:(NSArray *)arg2;
- (void)notificationListMigrationSchedulerRequestsMigratingNotificationDigest:(NCNotificationListMigrationScheduler *)arg1;

@end

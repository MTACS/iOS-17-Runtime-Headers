
@interface HealthAppHealthDaemon.HDHealthAppNotificationManager : NSObject {
    void summarySharingEntryManager;
    void userNotificationCenter;
}

- (void).cxx_destruct;
- (id)createSharingReminderNotificationAndReturnError:(id*)arg1;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 userNotificationCenter:(id)arg2;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)removeNotificationsWithIdentifiers:(id)arg1;

@end

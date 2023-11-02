
@interface ICShareNotifier : NSObject

+ (void)clearNotificationForRecordID:(id)arg1;
+ (id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg1;
+ (id)notificationTitleForEditors:(id)arg1;
+ (id)participantsWithReplicaIDs:(id)arg1 inNote:(id)arg2;
+ (id)replicaIDsThatEditedTimestamp:(id)arg1 sinceTimestamp:(id)arg2;
+ (void)setShareNotifierEnabled:(bool)arg1;
+ (void)setShouldPreventNotifications:(bool)arg1 forRecordID:(id)arg2;
+ (bool)shareNotifierEnabled;
+ (bool)shouldPreventNotificationsForRecordID:(id)arg1;
+ (bool)shouldShowNotificationForNote:(id)arg1;
+ (void)showNotificationForNote:(id)arg1 editors:(id)arg2;
+ (void)showNotificationIfNecessaryForCloudObject:(id)arg1 accountID:(id)arg2;
+ (void)showNotificationWithTitle:(id)arg1 message:(id)arg2 userInfo:(id)arg3;

@end

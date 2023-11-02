
@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>

+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;
+ (bool)_badgeBundleId:(id)arg1 increment:(bool)arg2 error:(id*)arg3;
+ (id)_centerForBundleId:(id)arg1;
+ (id)_postNotification:(id)arg1 bag:(id)arg2 centerBundleId:(id)arg3;
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3 scheduledOnly:(bool)arg4;

@end

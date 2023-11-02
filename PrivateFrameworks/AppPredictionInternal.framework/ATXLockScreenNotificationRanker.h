
@interface ATXLockScreenNotificationRanker : NSObject

+ (id)rankNewNotificationIntoNotificationArrays:(id)arg1 newNotification:(id)arg2 notificationArrayIndex:(unsigned long long)arg3 error:(id*)arg4;
+ (id)rankNewNotificationIntoNotificationArrays:(id)arg1 newNotificationArray:(id)arg2 newNotification:(id)arg3 error:(id*)arg4;
+ (id)rankNotificationArrays:(id)arg1 error:(id*)arg2;

@end

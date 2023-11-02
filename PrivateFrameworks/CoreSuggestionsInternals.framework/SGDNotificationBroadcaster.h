
@interface SGDNotificationBroadcaster : NSObject

+ (void)emitContactDeleted:(id)arg1;
+ (void)emitContactUpdated:(id)arg1;
+ (void)emitEventDeleted:(id)arg1;
+ (void)emitEventUpdated:(id)arg1;
+ (void)emitReminderDeleted:(id)arg1;
+ (void)emitReminderUpdated:(id)arg1;
+ (void)emitURLChanged;
+ (unsigned long long)notificationCount;

@end

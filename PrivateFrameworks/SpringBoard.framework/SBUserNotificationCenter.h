
@interface SBUserNotificationCenter : NSObject

+ (void)_userNotificationDone:(id)arg1;
+ (void)dispatchUserNotification:(id)arg1 flags:(int)arg2 replyPort:(unsigned int)arg3 auditToken:(id)arg4;
+ (void)startUserNotificationCenter;

@end

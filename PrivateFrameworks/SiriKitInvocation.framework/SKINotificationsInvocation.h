
@interface SKINotificationsInvocation : NSObject

+ (id)announceNotificationsRequestFromAnnounceDirectInvocationPayload:(id)arg1;
+ (id)announceNotificationsRequestFromNotification:(id)arg1 fromApp:(id)arg2 synchronousBurstIndex:(id)arg3 isSameTypeAsLastAnnouncement:(bool)arg4;

@end


@interface SKINotebookInvocation : NSObject

+ (id)announceRemindersRequestFromAnnounceDirectInvocationPayload:(id)arg1;
+ (id)announceRemindersRequestFromNotificationIdentifier:(id)arg1 fromApp:(id)arg2 synchronousBurstIndex:(id)arg3 isSameTypeAsLastAnnouncement:(bool)arg4 appBundleIdOfLastAnnouncement:(id)arg5 timeSinceLastAnnouncement:(double)arg6;

@end

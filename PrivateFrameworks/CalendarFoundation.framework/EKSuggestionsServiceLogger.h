
@interface EKSuggestionsServiceLogger : NSObject

+ (Class)_SGSuggestionsServiceClass;
+ (void)logEventConfirmedDetailsWithUniqueKey:(id)arg1;
+ (void)logEventConfirmedInboxWithUniqueKey:(id)arg1;
+ (void)logEventConfirmedNotificationWithUniqueKey:(id)arg1;
+ (void)logEventDismissedNotificationWithUniqueKey:(id)arg1;
+ (void)logEventEngagedNotificationWithUniqueKey:(id)arg1;
+ (void)logEventRejectedDetailsWithUniqueKey:(id)arg1;
+ (void)logEventRejectedInboxWithUniqueKey:(id)arg1;
+ (void)logEventRejectedNotificationWithUniqueKey:(id)arg1;
+ (void)logEventShowedDetailsWithUniqueKey:(id)arg1;
+ (void)logEventShowedNotificationWithUniqueKey:(id)arg1;
+ (void)logEventShowedTimeToLeaveNotificationWithUniqueKey:(id)arg1;

@end


@interface HKMedicationNotificationAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitMetricForType:(long long)arg1 areHealthNotificationsAuthorizedStatus:(id)arg2 interactionType:(long long)arg3 dataSource:(id)arg4;
+ (void)submitNotificationInterationMetricForType:(long long)arg1 withHealthNotificationsAuthorizedStatus:(id)arg2 dataSource:(id)arg3;
+ (void)submitNotificationSentMetricWithHealthNotificationsAuthorizedStatus:(bool)arg1 dataSource:(id)arg2;

@end

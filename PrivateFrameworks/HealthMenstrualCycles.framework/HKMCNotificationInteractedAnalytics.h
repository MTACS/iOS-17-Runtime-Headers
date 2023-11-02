
@interface HKMCNotificationInteractedAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitMetricForCategory:(id)arg1 action:(id)arg2;

@end

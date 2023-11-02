
@interface HKMCLoggedDataAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitMetricForMethod:(id)arg1 loggedDayIndex:(long long)arg2 currentDayIndex:(long long)arg3;

@end

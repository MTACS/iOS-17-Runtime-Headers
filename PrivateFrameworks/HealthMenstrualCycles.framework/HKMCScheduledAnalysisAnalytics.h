
@interface HKMCScheduledAnalysisAnalytics : NSObject

+ (bool)_isAllowed;
+ (bool)_isMetricEnabled;
+ (bool)shouldSubmit;
+ (void)submitMetricWithDateComponents:(id)arg1;

@end


@interface EKUIAccountErrorsAnalyticsTracker : NSObject

+ (void)_trackErrorShown:(unsigned long long)arg1;
+ (void)trackCalendarListDisplayedActionableError;
+ (void)trackCalendarListDisplayedOfflineError;
+ (void)trackCalendarListDisplayedOtherError;
+ (void)trackCalendarListDisplayedUnknownError;
+ (void)trackCalendarListInteractedWithError;
+ (void)trackRootUIDisplayedError;
+ (void)trackRootUIInteractedWithError;

@end


@interface SUUIMetricsUtilities : NSObject

+ (id)jsTimeFromTimeInterval:(double)arg1;
+ (id)newErrorPageEvent;
+ (id)newErrorRetryClickEvent;
+ (bool)shouldLogTimingMetrics;
+ (bool)showEventNotifications;
+ (double)timeIntervalFromJSTime:(id)arg1;
+ (bool)trackAllEvents;

@end

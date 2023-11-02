
@interface MXSourceUtilities : NSObject

+ (bool)anyClientsAvailable;
+ (id)getSignpostDataforPid:(int)arg1 forClient:(id)arg2 andEventTimestamp:(id)arg3;
+ (bool)isAppAnalyticsEnabled;
+ (bool)isMetricKitClient:(id)arg1;
+ (bool)isMetricKitClient:(id)arg1 forUser:(unsigned int)arg2;
+ (id)regionFormat;

@end

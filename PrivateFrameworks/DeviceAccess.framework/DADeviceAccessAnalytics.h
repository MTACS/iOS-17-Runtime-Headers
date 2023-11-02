
@interface DADeviceAccessAnalytics 

// Image: /System/Library/PrivateFrameworks/DeviceAccess.framework/DeviceAccess

+ (void)markSessionActivationForPid:(id)arg1 atTime:(id)arg2;
+ (void)markSessionInvalidationForPid:(id)arg1 atTime:(id)arg2;
+ (void)markState:(id)arg1 forDeviceId:(id)arg2 atTime:(id)arg3;
+ (void)sendAnalytics:(id)arg1 forEvent:(id)arg2;
+ (void)sendAnalyticsInfo:(id)arg1 forEvent:(id)arg2 withDeviceIdentifier:(id)arg3;

// Image: /usr/lib/libobjc.A.dylib

+ (void)initialize;

@end

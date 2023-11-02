
@interface TRIXPCActivitySupport : NSObject

+ (id)_registeredActivities;
+ (void)assertRegistrationOfLaunchdPlistActivities:(id)arg1;
+ (id)nameForActivityState:(long long)arg1;
+ (void)registerActivityWithLaunchDaemonDescriptor:(id)arg1 checkInBlock:(id /* block */)arg2 asyncHandler:(id /* block */)arg3;
+ (bool)unsafe_immediatelyScheduleActivityWithLaunchDaemonDescriptor:(id)arg1;

@end

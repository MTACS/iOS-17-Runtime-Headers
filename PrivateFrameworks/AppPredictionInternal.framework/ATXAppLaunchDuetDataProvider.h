
@interface ATXAppLaunchDuetDataProvider : ATXDuetDataProvider

+ (id)biomePublisher:(id)arg1 andEndDate:(id)arg2 isIncluded:(id /* block */)arg3;
+ (long long)supportedCoreDuetStream;
+ (Class)supportedDuetEventClass;

@end


@interface CNSimulatedCrashReporter : NSObject

+ (id)os_log;
+ (void)simulateCrashWithCode:(long long)arg1 description:(id)arg2;
+ (void)simulateCrashWithMessage:(id)arg1;

@end

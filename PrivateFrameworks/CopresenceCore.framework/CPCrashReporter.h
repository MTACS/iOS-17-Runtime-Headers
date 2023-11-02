
@interface CPCrashReporter : NSObject

+ (void)simulateCrashReportFromPID:(int)arg1 withKillCode:(unsigned int)arg2 usingReasonWithFormat:(id)arg3;
+ (void)simulateCrashReportWithFormat:(id)arg1;
+ (void)simulateCrashReportWithReason:(id)arg1 pid:(int)arg2 code:(unsigned int)arg3;

@end

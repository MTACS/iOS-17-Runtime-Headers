
@interface OSASystemWatchdogCrashReport : OSACrackShotReport

- (id)initWithPid:(int)arg1 procName:(id)arg2 bundleID:(id)arg3 exitSnapshot:(struct exit_reason_snapshot { unsigned int x1; unsigned long long x2; unsigned long long x3; }*)arg4 reason:(id)arg5;
- (id)problemType;

@end

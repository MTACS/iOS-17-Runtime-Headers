
@interface LPKPerformanceTestIntermediary : NSObject

+ (long long)_disableKtrace;
+ (long long)_dumpKtraceResult;
+ (long long)_enableKtrace;
+ (id)_generateSharedipadTraceHelperCommand;
+ (void)_removeStoredValues;
+ (bool)_startUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4 isPerformanceTest:(bool)arg5;
+ (void)disableRestrictionlessLoginWithCompletionHandler:(id /* block */)arg1;
+ (void)enableRestrictionlessLoginWithCompletionHandler:(id /* block */)arg1;
+ (id)endPerformanceTestAndDumpResults;
+ (bool)endUserSwitchTest;
+ (bool)startPerformanceTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4;
+ (bool)startUserSwitchTestForType:(unsigned long long)arg1 count:(long long)arg2 username:(id)arg3 password:(id)arg4;

@end

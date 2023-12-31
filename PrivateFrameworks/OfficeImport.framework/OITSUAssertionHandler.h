
@interface OITSUAssertionHandler : NSObject

+ (int)_atomicIncrementAssertCount;
+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 isFatal:(bool)arg4 description:(const char *)arg5;
+ (void)logBacktrace;
+ (void)logBacktraceThrottled;
+ (void)logBacktraceWithCallStackSymbols:(id)arg1;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)arg1 onlyFatal:(bool)arg2;
+ (id)performBlockIgnoringAssertions:(id /* block */)arg1;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)arg1;
+ (void)simulateCrashWithMessage:(id)arg1;

@end

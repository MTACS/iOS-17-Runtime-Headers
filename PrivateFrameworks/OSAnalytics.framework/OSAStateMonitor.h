
@interface OSAStateMonitor : NSObject

+ (id)CALogStateToString:(long long)arg1;
+ (void)checkAndReportCALogStates;
+ (void)checkCALogWrittenStatus;
+ (void)checkSubmissionStatus;
+ (id)dateForEvent:(id)arg1;
+ (id)evaluateCALogStates:(id)arg1;
+ (void)evaluateState;
+ (id)keyForEvent:(id)arg1;
+ (void)postFailureWithReason:(id)arg1;
+ (bool)processCALogEvent:(id)arg1 eventPayload:(id)arg2 into:(id*)arg3;
+ (void)recordEvent:(id)arg1;
+ (void)recordEvent:(id)arg1 with:(id)arg2;

@end

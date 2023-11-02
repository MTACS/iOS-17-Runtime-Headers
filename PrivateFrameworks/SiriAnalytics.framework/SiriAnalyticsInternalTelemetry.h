
@interface SiriAnalyticsInternalTelemetry : NSObject

- (void)_trackLogicalClock:(id)arg1 isDerivativeClock:(bool)arg2;
- (void)trackAnyEventEmitted:(id)arg1;
- (void)trackEmittedEvents:(id)arg1;
- (void)trackEventEmitted:(id)arg1;
- (void)trackFBFError:(int)arg1 forEventData:(id)arg2;
- (void)trackLogicalClock:(id)arg1;
- (void)trackMessageStreamProcessed:(long long)arg1 timeToFirstMessage:(long long)arg2 messageCount:(unsigned long long)arg3 processingReason:(id)arg4 failureReason:(id)arg5;

@end

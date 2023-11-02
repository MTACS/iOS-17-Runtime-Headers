
@interface TIHapticsUsageAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bucketForTime:(double)arg1;
+ (id)idleTimeBuckets;

- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (void)dispatchIdleEventType:(id)arg1 idleTime:(double)arg2 session:(id)arg3;
- (void)dispatchSessionEventWithActiveTime:(double)arg1 visibleTime:(double)arg2 session:(id)arg3;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)init;
- (void)registerEventSpec;

@end

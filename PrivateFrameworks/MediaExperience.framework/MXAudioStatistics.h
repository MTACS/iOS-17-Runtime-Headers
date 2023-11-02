
@interface MXAudioStatistics : NSObject {
    int (* mSendSingleMessage;
}

+ (id)sharedInstance;

- (id)initInternal;
- (void)sendSinglePerformanceMessageForAssertion:(const char *)arg1 explanation:(id)arg2 activity:(id)arg3;
- (void)sendSinglePerformanceMessageForRoutine:(const char *)arg1 operationTime:(long long)arg2 details:(id)arg3;

@end

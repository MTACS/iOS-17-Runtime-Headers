
@interface LBFStateDetector : NSObject {
    long long  _currentState;
    NSDate * _currentTime;
}

@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) NSDate *currentTime;

- (void).cxx_destruct;
- (long long)currentState;
- (id)currentTime;
- (id)init;
- (id)initWithState:(long long)arg1;
- (id)processDprivacydEvent:(id)arg1;
- (id)processEventsStartingFromState:(long long)arg1 bucketStartTime:(id)arg2 events:(id)arg3;
- (id)processLighthouseEvent:(id)arg1;
- (id)processMLRuntimedEvent:(id)arg1;
- (id)processTrialdEvent:(id)arg1;
- (id)validateTransition:(id)arg1;

@end

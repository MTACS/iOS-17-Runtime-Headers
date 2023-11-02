
@interface SFBubbleEstimator : NSObject {
    bool  _insideBubble;
    bool  _insideBubbleWithThreshold;
    bool  _preventBoost;
    long long  _rssiEnter;
    long long  _rssiExit;
    SFRSSIQueue * _rssiQueue;
    double  _thresholdSeconds;
    unsigned long long  _thresholdStartTicks;
}

@property (nonatomic, readonly) bool insideBubble;
@property (nonatomic, readonly) bool insideBubbleWithThreshold;
@property (nonatomic) bool preventBoost;
@property (nonatomic) long long rssiEnter;
@property (nonatomic) long long rssiExit;
@property (nonatomic) double thresholdSeconds;
@property (nonatomic, readonly) double velocity;
@property (nonatomic, readonly) double velocitySmoothed;

+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2;
+ (id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 threshold:(double)arg3;

- (void).cxx_destruct;
- (bool)insideBubble;
- (bool)insideBubbleWithThreshold;
- (bool)preventBoost;
- (void)reset;
- (long long)rssiEnter;
- (long long)rssiExit;
- (void)setPreventBoost:(bool)arg1;
- (void)setRssiEnter:(long long)arg1;
- (void)setRssiExit:(long long)arg1;
- (void)setThresholdSeconds:(double)arg1;
- (bool)shouldExpandBubble;
- (double)thresholdSeconds;
- (long long)updateWithRSSI:(long long)arg1;
- (double)velocity;
- (double)velocitySmoothed;

@end

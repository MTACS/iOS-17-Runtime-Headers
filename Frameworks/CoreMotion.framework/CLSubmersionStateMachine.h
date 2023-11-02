
@interface CLSubmersionStateMachine : NSObject {
    double  _deepThreshold;
    double  _maxDepth;
    double  _nearDepthLimitThreshold;
    double  _pastMaxDepthThreshold;
    double  _sensorErrorThreshold;
    long long  _type;
}

@property (nonatomic, readonly) double deepThreshold;
@property (nonatomic, readonly) double nearDepthLimitThreshold;
@property (nonatomic, readonly) double pastMaxDepthThreshold;
@property (nonatomic, readonly) double sensorErrorThreshold;
@property (nonatomic) long long type;

- (double)deepThreshold;
- (long long)getType;
- (id)initWithType:(long long)arg1;
- (void)initializeThresholds;
- (double)nearDepthLimitThreshold;
- (double)pastMaxDepthThreshold;
- (double)sensorErrorThreshold;
- (void)setType:(long long)arg1;
- (long long)stateFromDepth:(id)arg1 forceSubmersion:(bool)arg2;
- (long long)type;

@end

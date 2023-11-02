
@interface WBSCyclerStatus : NSObject <NSSecureCoding> {
    NSString * _activeTestSuiteName;
    bool  _connectedToTestTarget;
    double  _executionTime;
    unsigned long long  _iterationCount;
    bool  _running;
    unsigned long long  _seed;
}

@property (nonatomic, readonly, copy) NSString *activeTestSuiteName;
@property (getter=isConnectedToTestTarget, nonatomic, readonly) bool connectedToTestTarget;
@property (nonatomic, readonly) double executionTime;
@property (nonatomic, readonly) unsigned long long iterationCount;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic, readonly) unsigned long long seed;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeTestSuiteName;
- (void)encodeWithCoder:(id)arg1;
- (double)executionTime;
- (id)init;
- (id)initWithActiveTestSuiteName:(id)arg1 seed:(unsigned long long)arg2 isConnectedToTestTarget:(bool)arg3 isRunning:(bool)arg4 iterationCount:(unsigned long long)arg5 executionTime:(double)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isConnectedToTestTarget;
- (bool)isRunning;
- (unsigned long long)iterationCount;
- (unsigned long long)seed;

@end

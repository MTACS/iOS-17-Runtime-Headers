
@interface WBSCyclerOperation : NSObject {
    float  _backoffRatio;
    id /* block */  _block;
    bool  _executing;
    bool  _finished;
    double  _nextBackoffTimeInterval;
    unsigned long long  _numberOfRemainingAttempts;
}

@property (nonatomic, copy) id /* block */ block;
@property (getter=isExecuting, nonatomic, readonly) bool executing;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) double nextBackoffTimeInterval;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)executeWithResultHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2;
- (bool)isExecuting;
- (bool)isFinished;
- (double)nextBackoffTimeInterval;
- (void)setBlock:(id /* block */)arg1;

@end

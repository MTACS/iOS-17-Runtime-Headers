
@interface PXTimeInterval : NSObject {
    double  _beginTime;
    double  _endTime;
    long long  _state;
    NSMutableDictionary * _tokenToTransitionHandler;
}

@property (nonatomic) double beginTime;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double endTime;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSMutableDictionary *tokenToTransitionHandler;

- (void).cxx_destruct;
- (void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)arg1;
- (id)addStateTransitionHandler:(id /* block */)arg1;
- (void)beginInterval;
- (void)beginIntervalWithTimeOverride:(double)arg1;
- (double)beginTime;
- (double)duration;
- (void)endInterval;
- (void)endIntervalWithTimeOverride:(double)arg1;
- (double)endTime;
- (id)init;
- (void)removeStateTransitionHandler:(id)arg1;
- (void)reset;
- (void)setBeginTime:(double)arg1;
- (void)setEndTime:(double)arg1;
- (void)setState:(long long)arg1;
- (void)setTokenToTransitionHandler:(id)arg1;
- (long long)state;
- (id)tokenToTransitionHandler;

@end

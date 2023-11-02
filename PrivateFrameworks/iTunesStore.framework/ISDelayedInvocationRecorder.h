
@interface ISDelayedInvocationRecorder : ISInvocationRecorder {
    double  _delayInterval;
}

@property (nonatomic) double delayInterval;

- (double)delayInterval;
- (void)invokeInvocation:(id)arg1;
- (void)setDelayInterval:(double)arg1;

@end

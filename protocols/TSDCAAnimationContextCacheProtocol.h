
@protocol TSDCAAnimationContextCacheProtocol <NSObject>

@required

- (double)percentAtTime:(double)arg1;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2;
- (id)valueAtTime:(double)arg1 initialValue:(id)arg2 groupTimingFactor:(double)arg3;
- (id)valueForKeyPath:(NSString *)arg1 atTime:(double)arg2 animationCache:(TSDCAAnimationCache *)arg3;

@end

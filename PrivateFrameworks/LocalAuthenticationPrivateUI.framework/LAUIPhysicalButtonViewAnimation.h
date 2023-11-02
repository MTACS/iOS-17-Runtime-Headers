
@interface LAUIPhysicalButtonViewAnimation : NSObject {
    NSString * _animationKey;
    CALayer * _layer;
    LAUIPhysicalButtonView * _physicalButtonView;
}

- (void).cxx_destruct;
- (void)addAdditiveAnimation:(id)arg1 to:(id)arg2 keyPath:(id)arg3;
- (void)begin;
- (void)beginWithDelay:(double)arg1;
- (double)duration;
- (void)end;
- (void)endImmediately;
- (id)initWith:(id)arg1 layer:(id)arg2;
- (bool)isRunning;
- (void)update;

@end


@interface UIAnimator : NSObject {
    NSMutableArray * _animations;
    NSMutableDictionary * _animatorScreenLinks;
    double  _lastUpdateTime;
}

+ (void)disableAnimation;
+ (void)enableAnimation;
+ (id)sharedAnimator;

- (void).cxx_destruct;
- (void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(bool)arg3 startTime:(double)arg4;
- (void)_advanceAnimationsOnScreenWithIdentifier:(id)arg1 withTimestamp:(double)arg2;
- (bool)_isRunningAnimation:(id)arg1;
- (void)_startAnimation:(id)arg1 withStartTime:(double)arg2;
- (void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(bool)arg3;
- (void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(bool)arg3;
- (void)dealloc;
- (id)init;
- (void)removeAnimationsForTarget:(id)arg1;
- (void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2;
- (void)startAnimation:(id)arg1;
- (void)stopAnimation:(id)arg1;

@end

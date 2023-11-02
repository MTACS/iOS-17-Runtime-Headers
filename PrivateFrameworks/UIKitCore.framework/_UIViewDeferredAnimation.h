
@interface _UIViewDeferredAnimation : NSObject {
    bool  _autoreverses;
    double  _duration;
    bool  _finalized;
    id  _initialValue;
    NSString * _key;
    double  _repeatCount;
}

@property (nonatomic, readonly) NSArray *animationFrames;
@property (nonatomic) bool autoreverses;
@property (nonatomic) double duration;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (nonatomic, retain) id initialValue;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) double repeatCount;

- (void).cxx_destruct;
- (id)_animationFrames;
- (void)_enumerateAnimationFramesForKeyframes:(id /* block */)arg1;
- (void)_finalize;
- (void)addAnimationFrameForValue:(id)arg1;
- (void)animateFrameAtIndex:(long long)arg1 animations:(id /* block */)arg2;
- (id)animationFrames;
- (bool)autoreverses;
- (void)calculateFrameValues:(id)arg1 frameTimes:(id)arg2 withFrameInterval:(double)arg3 valueTransformer:(id /* block */)arg4;
- (id)description;
- (double)duration;
- (id)initialValue;
- (bool)isEmpty;
- (bool)isFinalized;
- (id)key;
- (double)repeatCount;
- (void)setAutoreverses:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setInitialValue:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setRepeatCount:(double)arg1;

@end

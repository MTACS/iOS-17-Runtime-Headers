
@interface ARUIFloatSpringAnimation : NSObject <ARUIRingGroupAnimation> {
    id /* block */  _applier;
    bool  _completed;
    <ARUIRingGroupAnimationDelegate> * _delegate;
    _TtC15ActivityRingsUI15SpringAnimation * _springAnimation;
}

@property (nonatomic, readonly) float currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARUIRingGroupAnimationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float endValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)animationWithTension:(double)arg1 friction:(double)arg2 startValue:(float)arg3 endValue:(float)arg4 applier:(id /* block */)arg5;

- (void).cxx_destruct;
- (void)completeAnimation;
- (float)currentValue;
- (void)dealloc;
- (id)delegate;
- (float)endValue;
- (id)initWithTension:(double)arg1 friction:(double)arg2 startValue:(float)arg3 endValue:(float)arg4 applier:(id /* block */)arg5;
- (bool)isAnimating;
- (void)setDelegate:(id)arg1;
- (void)update:(double)arg1;

@end

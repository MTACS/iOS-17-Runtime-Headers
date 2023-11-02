
@interface TSDContentAnimationGroup : TSDContentAnimation {
    NSArray * _animations;
    double  _duration;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, copy) NSArray *animations;
@property (nonatomic) double duration;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (id)animations;
- (void)dealloc;
- (double)duration;
- (id)i_animationWithTransformBlock:(id /* block */)arg1;
- (bool)i_canProduceAnimation;
- (id)i_endLocation;
- (void)setAnimations:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;

@end

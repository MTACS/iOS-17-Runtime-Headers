
@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate> {
    id /* block */  _completion;
    double  _duration;
    ARUIRingGroupAnimationState * _nextAnimationState;
    CAMediaTimingFunction * _timingFunction;
    NSMutableSet * _trackedAnimations;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARUIRingGroupAnimationState *nextAnimationState;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;
@property (nonatomic, retain) NSMutableSet *trackedAnimations;

+ (id)currentAnimationState;
+ (void)popAnimationState;
+ (void)pushAnimationState:(id)arg1;

- (void).cxx_destruct;
- (void)addAnimation:(id)arg1;
- (void)animationDidComplete:(id)arg1;
- (id /* block */)completion;
- (double)duration;
- (id)init;
- (id)nextAnimationState;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setNextAnimationState:(id)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setTrackedAnimations:(id)arg1;
- (id)timingFunction;
- (id)trackedAnimations;

@end

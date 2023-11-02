
@interface SFTransitionCoordinator : NSObject <SFTransitionContext, SFTransitionCoordinating> {
    NSMutableArray * _animations;
    NSMutableArray * _completionBlocks;
    bool  _isTransition;
    long long  _keyframeAnimationMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTransition;
@property (nonatomic, readonly) <SFTransitionCoordinating> *publicCoordinator;
@property (nonatomic, readonly) bool requiresKeyframeAnimations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesKeyframeAnimations;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(id /* block */)arg3;
- (void)addRetargetableAnimations:(id /* block */)arg1;
- (void)disableKeyframeAnimations;
- (id)initWithAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)invokeAnimations;
- (void)invokeCompletion;
- (bool)isTransition;
- (void)performTransitionWithAnimation:(bool)arg1 inContextOfContainerView:(id)arg2;
- (id)publicCoordinator;
- (bool)requiresKeyframeAnimations;
- (bool)usesKeyframeAnimations;

@end

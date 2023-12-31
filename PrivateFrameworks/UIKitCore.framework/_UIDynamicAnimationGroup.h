
@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {
    NSMutableArray * _animations;
    id /* block */  _applier;
    NSMutableArray * _runningAnimations;
}

@property (nonatomic, copy) NSArray *animations;

- (bool)_animateForInterval:(double)arg1;
- (void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2;
- (void)_stopAnimation;
- (void)addAnimation:(id)arg1;
- (id)animations;
- (void)dealloc;
- (void)removeAnimation:(id)arg1;
- (void)runWithCompletion:(id /* block */)arg1;
- (void)runWithGroupApplier:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)runWithGroupApplier:(id /* block */)arg1 completion:(id /* block */)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4;
- (void)setAnimations:(id)arg1;

@end

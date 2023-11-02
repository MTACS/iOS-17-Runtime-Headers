
@interface _CRKCardViewControllerTransitionCoordinator : NSObject <CRKAnimationCoordinating> {
    bool  _animated;
    id /* block */  _animations;
    id /* block */  _completion;
    UIView * _containerView;
    double  _duration;
    id /* block */  _finalSetup;
    id /* block */  _initialSetup;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, copy) id /* block */ finalSetup;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialSetup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)animations;
- (id /* block */)completion;
- (id)containerView;
- (double)duration;
- (id /* block */)finalSetup;
- (id)init;
- (id /* block */)initialSetup;
- (bool)isAnimated;
- (void)setAnimated:(bool)arg1;
- (void)setAnimations:(id /* block */)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFinalSetup:(id /* block */)arg1;
- (void)setInitialSetup:(id /* block */)arg1;

@end

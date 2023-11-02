
@interface PLClickPresentationTransition : NSObject <_UIClickPresentationTransition> {
    PLViewControllerAnimator * _animator;
    MTMaterialView * _backgroundView;
    id /* block */  _completion;
    bool  _propagatesPresentingViewTransform;
    _PLViewControllerOneToOneTransitionContext * _transitionContext;
    <UIViewControllerTransitioningDelegate> * _transitionDelegate;
}

@property (nonatomic) MTMaterialView *backgroundView;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool propagatesPresentingViewTransform;
@property (nonatomic, copy) UITargetedPreview *sourcePreview;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animator;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (id)backgroundView;
- (id)customAnimator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(id /* block */)arg4;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (bool)propagatesPresentingViewTransform;
- (void)setBackgroundView:(id)arg1;
- (void)setPropagatesPresentingViewTransform:(bool)arg1;
- (void)transitionDidEnd:(bool)arg1;
- (void)updateBackgroundViewForTransition;

@end

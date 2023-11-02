
@interface PLClickPresentationDismissalTransition : PLClickPresentationTransition {
    PLClickPresentationPresentationTransition * _presentationTransition;
}

@property (nonatomic) PLClickPresentationPresentationTransition *presentationTransition;

- (void).cxx_destruct;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(id /* block */)arg4;
- (id)presentationTransition;
- (void)setPresentationTransition:(id)arg1;
- (void)updateBackgroundViewForTransition;

@end


@interface PLExpandedPlatterTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate> {
    UIPresentationController * _presentationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_presentationController, setter=_setPresentationController:, nonatomic, retain) UIPresentationController *presentationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_presentationController;
- (void)_setPresentationController:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2;
- (void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2;

@end

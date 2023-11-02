
@interface TeaUI.Transition : NSObject <UIViewControllerTransitioningDelegate> {
    void dismissalTransitionFactory;
    void interactiveTransition;
    void presentationControllerFactory;
    void presentationTransitionFactory;
}

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)init;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end


@protocol AVTransitionControllerDelegate <NSObject>

@required

- (void)transitionController:(AVTransitionController *)arg1 animationProgressDidChange:(float)arg2;
- (AVPresentationConfiguration *)transitionController:(AVTransitionController *)arg1 configurationForPresentedViewController:(UIViewController *)arg2 presentingViewController:(UIViewController *)arg3;
- (bool)transitionController:(AVTransitionController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (void)transitionController:(void *)arg1 prepareForFinishingInteractiveTransition:(void *)arg2; // needs 2 arg types, found 6: AVTransitionController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIView *)transitionController:(AVTransitionController *)arg1 targetViewForDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(void *)arg1 transitionWillComplete:(void *)arg2 continueBlock:(void *)arg3; // needs 3 arg types, found 8: AVTransitionController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)transitionController:(AVTransitionController *)arg1 willBeginDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(AVTransitionController *)arg1 willBeginPresentingViewController:(UIViewController *)arg2;
- (UIColor *)transitionControllerBackgroundViewBackgroundColor:(AVTransitionController *)arg1;
- (void)transitionControllerBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (void)transitionControllerBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (bool)transitionControllerCanBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (bool)transitionControllerCanBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (UIColor *)transitionControllerPresentedViewBackgroundColor:(AVTransitionController *)arg1;

@end

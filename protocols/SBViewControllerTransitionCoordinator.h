
@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator, SBViewControllerTransitionCoordinatorContext>

@required

- (void)addTransitionContinuation:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, id /* block */, void*, void, id /* block */, void*, void*
- (bool)animateAlongsideTransition:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, void*, id /* block */, void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, void*
- (bool)animateAlongsideTransitionInView:(void *)arg1 animation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, void*, id /* block */, void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, void*
- (void)notifyWhenInteractionEndsUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBViewControllerTransitionCoordinatorContext> *, void*
- (bool)requiresCancellableAnimations;
- (bool)requiresInteractiveAnimations;
- (bool)requiresRestartableAnimations;

@end

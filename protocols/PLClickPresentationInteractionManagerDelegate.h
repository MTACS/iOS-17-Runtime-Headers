
@protocol PLClickPresentationInteractionManagerDelegate <NSObject>

@required

- (UIViewController<PLClickPresentationInteractionPresentable> *)presentedViewControllerForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;

@optional

- (void)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2;
- (bool)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 shouldBeginInteractionWithTouchAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)clickPresentationInteractionManager:(void *)arg1 shouldFinishInteractionThatReachedForceThreshold:(void *)arg2 withCompletionBlock:(void *)arg3; // needs 3 arg types, found 8: PLClickPresentationInteractionManager *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)clickPresentationInteractionManagerDidEndUserInteraction:(PLClickPresentationInteractionManager *)arg1;
- (bool)clickPresentationInteractionManagerShouldAllowLongPressGesture:(PLClickPresentationInteractionManager *)arg1;
- (void)clickPresentationInteractionManagerWillBeginUserInteraction:(PLClickPresentationInteractionManager *)arg1;
- (UIView *)containerViewForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;
- (<UIViewControllerTransitioningDelegate> *)transitioningDelegateForClickPresentationInteractionManager:(PLClickPresentationInteractionManager *)arg1;

@end

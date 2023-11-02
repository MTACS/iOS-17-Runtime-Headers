
@protocol _UIClickPresentationTransition <NSObject>

@required

- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
- (void)transitionDidEnd:(bool)arg1;

@optional

- (UIViewPropertyAnimator *)customAnimator;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
- (void)setSourcePreview:(UITargetedPreview *)arg1;
- (UITargetedPreview *)sourcePreview;
- (void)transitionWillReverse;

@end

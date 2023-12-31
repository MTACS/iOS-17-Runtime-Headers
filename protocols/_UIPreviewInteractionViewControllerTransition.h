
@protocol _UIPreviewInteractionViewControllerTransition <NSObject>

@required

- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
- (void)transitionDidEnd:(bool)arg1;

@optional

- (void)performWithCustomAnimator:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
- (void)setSourcePreview:(UITargetedPreview *)arg1;
- (UITargetedPreview *)sourcePreview;
- (void)transitionWillReverse;

@end


@protocol _UIDragPreviewContainer <NSObject>

@required

- (void)_animateDropAlongsideAnimator:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <UIDragAnimating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_animateLiftAlongsideAnimator:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <UIDragAnimating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_animateLiftCancellationAlongsideAnimator:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <UIDragAnimating> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_preparePreviewContainerWithPreview:(UIView *)arg1 source:(UIView *)arg2 initialTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;

@end

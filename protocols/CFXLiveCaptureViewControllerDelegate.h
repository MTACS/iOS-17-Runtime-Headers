
@protocol CFXLiveCaptureViewControllerDelegate <NSObject>

@required

- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 didRenderFrame:(CFXFrame *)arg2;
- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 livePreviewDoubleTappedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(UITapGestureRecognizer *)arg3;
- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 livePreviewPannedAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(UIPanGestureRecognizer *)arg3;
- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 livePreviewPinchedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(UIPinchGestureRecognizer *)arg3;
- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 livePreviewRotatedAtNormalizedCenterPoint:(struct CGPoint { double x1; double x2; })arg2 gesture:(UIRotationGestureRecognizer *)arg3;
- (void)liveCaptureViewController:(CFXLiveCaptureViewController *)arg1 livePreviewTappedAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2;

@end

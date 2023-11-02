
@protocol CAMPreviewViewControllerDelegate <NSObject>

@required

- (void)previewViewController:(CAMPreviewViewController *)arg1 didSelectMRCResult:(CAMMachineReadableCodeResult *)arg2;
- (bool)previewViewController:(CAMPreviewViewController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)previewViewControllerDidChangeFocusOrExposure:(CAMPreviewViewController *)arg1;
- (void)previewViewControllerDidChangeFocusOrExposureLocked:(CAMPreviewViewController *)arg1 shouldAnimate:(bool)arg2;
- (void)previewViewControllerDidChangeVideoFillAspectRatio:(CAMPreviewViewController *)arg1;
- (void)previewViewControllerWillResetFocusOrExposure:(CAMPreviewViewController *)arg1;

@end

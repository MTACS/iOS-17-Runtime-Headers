
@protocol VKCImageDataDetectorViewDelegate <NSObject>

@required

- (void)dataDetectorView:(VKCImageDataDetectorView *)arg1 analyticsEventOccured:(VKAnalyticsEvent *)arg2;
- (bool)dataDetectorView:(VKCImageDataDetectorView *)arg1 dataDetectorInteractionShouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (UIView *)previewForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (UIImage *)previewImageForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (void)willDismissMenuForDataDetectorView:(VKCImageDataDetectorView *)arg1;
- (void)willDisplayMenuForDataDetectorView:(VKCImageDataDetectorView *)arg1;

@optional

- (UIViewController *)presentingViewControllerForInteractionWithDataDetectorView:(VKCImageDataDetectorView *)arg1;

@end

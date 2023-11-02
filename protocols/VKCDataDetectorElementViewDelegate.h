
@protocol VKCDataDetectorElementViewDelegate <NSObject>

@required

- (void)dataDetectorElementView:(VKCDataDetectorElementView *)arg1 analyticsEventOccured:(VKAnalyticsEvent *)arg2;
- (bool)dataDetectorElementView:(VKCDataDetectorElementView *)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (UIView *)previewForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewImageBoundsForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (UIImage *)previewImageForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (void)willDismissMenuForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;
- (void)willDisplayMenuForDataDetectorElementView:(VKCDataDetectorElementView *)arg1;

@optional

- (UIViewController *)presentingViewControllerForInteractionWithDataDetectorElementView:(VKCDataDetectorElementView *)arg1;

@end

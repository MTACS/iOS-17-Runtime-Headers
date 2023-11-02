
@protocol CSDismissableModalViewControllerDelegate <NSObject>

@required

- (void)addGrabberView:(UIView *)arg1;
- (void)dismissForHomeButton;

@optional

- (void)handleBarSwipeHomeGesturePerformed;
- (void)handleBottomEdgeGestureBegan:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureChanged:(UIScreenEdgePanGestureRecognizer *)arg1;
- (void)handleBottomEdgeGestureEnded:(UIScreenEdgePanGestureRecognizer *)arg1;

@end


@protocol TSKPopoverBasedViewControllerDelegate <NSObject>

@optional

- (double)paddingAboveHalfHeightAtTopOfScreen;
- (void)popoverController:(TSKPopoverBasedViewController *)arg1 learnMoreAPDIDTapped:(NSString *)arg2;
- (bool)popoverController:(TSKPopoverBasedViewController *)arg1 shouldReceiveOutsideTouchAtLocation:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (void)popoverControllerDidDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillShowPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (bool)wantsCloseArrowForPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;

@end

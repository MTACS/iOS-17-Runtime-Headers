
@protocol _UIPopoverDimmingViewDelegate <UIDimmingViewDelegate>

@required

- (bool)popoverDimmingViewDidReceiveDismissalInteraction:(_UIPopoverDimmingView *)arg1;
- (bool)popoverDimmingViewShouldAllowInteraction:(_UIPopoverDimmingView *)arg1;

@end

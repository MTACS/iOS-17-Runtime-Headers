
@protocol PKTextInputFeedbackControllerDelegate <NSObject>

@required

- (UIView *)feedbackControllerContainerView:(PKTextInputFeedbackController *)arg1;
- (void)feedbackControllerShowingCustomFeedbackDidChange:(PKTextInputFeedbackController *)arg1;

@end

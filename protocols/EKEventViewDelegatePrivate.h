
@protocol EKEventViewDelegatePrivate <EKEventViewDelegate, EKUIAppReviewPrompter>

@optional

- (long long)editorPresentationStyle;
- (void)eventViewController:(EKEventViewController *)arg1 didDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(bool)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDismissalOfEditViewController:(EKEventEditViewController *)arg2;
- (void)eventViewController:(EKEventViewController *)arg1 requestsDisplayOfEditViewController:(EKEventEditViewController *)arg2 animated:(bool)arg3;
- (void)eventViewController:(EKEventViewController *)arg1 willDismissEditViewController:(EKEventEditViewController *)arg2 deleted:(bool)arg3;
- (void)eventViewControllerDidBeginEditingEventWithEditViewController:(EKEventEditViewController *)arg1;
- (void)eventViewControllerDidRequestAddToCalendar:(EKEventViewController *)arg1;
- (bool)eventViewControllerEditButtonTemporarilyDisabled:(EKEventViewController *)arg1;
- (bool)eventViewControllerShouldDismissSelf:(EKEventViewController *)arg1;
- (void)eventViewControllerWillBeginEditingEvent:(EKEventViewController *)arg1;
- (void)eventViewControllerWillDisappear:(EKEventViewController *)arg1;
- (void)eventViewControllerWillFinishEditingEvent:(EKEventViewController *)arg1 deleted:(bool)arg2;
- (bool)eventViewDelegateShouldCreateOwnEditViewController:(EKEventViewController *)arg1;
- (bool)eventViewDelegateShouldHandlePresentationOfEditViewController:(EKEventViewController *)arg1;

@end
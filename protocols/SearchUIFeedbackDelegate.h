
@protocol SearchUIFeedbackDelegate <SFFeedbackListener>

@optional

- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1;
- (void)cardSectionViewDidInvalidateSize:(UIView *)arg1 animate:(bool)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (void)presentViewController:(UIViewController *)arg1;
- (void)presentViewControllerForCard:(SFCard *)arg1 animate:(bool)arg2;
- (bool)shouldHandleCardSectionEngagement:(SFCardSectionEngagementFeedback *)arg1;
- (void)updateViewControllerTitle:(NSString *)arg1;
- (void)willDismissViewController:(UIViewController *)arg1;

@end

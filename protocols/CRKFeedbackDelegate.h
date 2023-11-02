
@protocol CRKFeedbackDelegate <CRFeedbackListener>

@optional

- (void)presentViewController:(UIViewController *)arg1;
- (void)presentViewControllerForCard:(id <CRCard>)arg1 animate:(bool)arg2;
- (void)willDismissViewController:(UIViewController *)arg1;

@end

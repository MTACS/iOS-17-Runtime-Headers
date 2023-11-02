
@protocol UIFeedbackGeneratorUserInteractionDriven

@required

- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end

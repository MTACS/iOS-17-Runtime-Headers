
@protocol TIFeedbackControllerDelegate

@required

- (void)accumulateWordCounts;
- (void)resetWordCounts;
- (void)sendCompletionEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;
- (void)sendInitiationEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;
- (void)sendTerminationEventUsingStudyDataFromFeedbackController:(TIFeedbackController *)arg1;

@end

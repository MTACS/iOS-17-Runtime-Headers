
@protocol Feedback.FeedbackClientProtocol

@required

- (void)didFailSubmissionWithError:(_TtC8Feedback18FBKSubmissionError *)arg1;
- (void)didRequestViewDismissalWithSaved:(bool)arg1;
- (void)draftDirtyStateUpdated:(bool)arg1;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)arg1 responseID:(NSString *)arg2 completedForm:(_TtC8Feedback15FBKFeedbackForm *)arg3;
- (void)feedbackDidFailToAttachURL:(NSURL *)arg1 nsError:(NSError *)arg2;
- (void)feedbackRestartDidFailWithError:(NSNumber *)arg1;

@end

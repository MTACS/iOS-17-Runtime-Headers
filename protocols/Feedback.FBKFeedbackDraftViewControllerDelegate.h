
@protocol Feedback.FBKFeedbackDraftViewControllerDelegate

@required

- (void)feedbackDraftViewController:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1 didFailToStartWithError:(long long)arg2;
- (void)feedbackDraftViewControllerDidCancel:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1;

@optional

- (void)feedbackDraftViewController:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1 didCompleteWithFeedbackID:(NSString *)arg2;
- (void)feedbackDraftViewController:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1 didCompleteWithResponseType:(long long)arg2 responseID:(NSString *)arg3;
- (void)feedbackDraftViewController:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1 didFailToAttachURL:(NSURL *)arg2 error:(long long)arg3;
- (void)feedbackDraftViewController:(_TtC8Feedback30FBKFeedbackDraftViewController *)arg1 didFailToSubmitFeedback:(_TtC8Feedback18FBKSubmissionError *)arg2;

@end


@interface _TtC24KeyboardSettingsFeedbackP33_A8D87A2BC67C5811F046956486A724BD23FeedbackSurveyPresenter : _TtCs12_SwiftObject <Feedback.FBKFeedbackDraftViewControllerDelegate> {
    void completion;
    void durationBucketingThresholds;
    void feedbackController;
}

- (void)feedbackDraftViewController:(id)arg1 didCompleteWithFeedbackID:(id)arg2;
- (void)feedbackDraftViewController:(id)arg1 didFailToAttachURL:(id)arg2 error:(long long)arg3;
- (void)feedbackDraftViewController:(id)arg1 didFailToStartWithError:(long long)arg2;
- (void)feedbackDraftViewController:(id)arg1 didFailToSubmitFeedback:(id)arg2;
- (void)feedbackDraftViewControllerDidCancel:(id)arg1;

@end

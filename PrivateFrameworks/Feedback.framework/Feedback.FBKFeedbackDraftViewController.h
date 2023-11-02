
@interface Feedback.FBKFeedbackDraftViewController : UIViewController <Feedback.FeedbackClientProtocol> {
    void _xpcConnection;
    void delegate;
    void extensionKitQueryDelegate;
    void extensionObserver;
    void form;
    void showsCompletionPage;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didFailSubmissionWithError:(id)arg1;
- (void)didRequestViewDismissalWithSaved:(bool)arg1;
- (void)draftDirtyStateUpdated:(bool)arg1;
- (void)feedbackDidBeginSubmission;
- (void)feedbackDidCompleteWithResponseType:(long long)arg1 responseID:(id)arg2 completedForm:(id)arg3;
- (void)feedbackDidFailToAttachURL:(id)arg1 nsError:(id)arg2;
- (void)feedbackRestartDidFailWithError:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

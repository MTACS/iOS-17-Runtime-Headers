
@interface Feedback.DraftingExtensionViewController : UIViewController <FBKBugFormTableViewControllerProtocol, Feedback.FeedbackExtensionProtocol> {
    void bugFormTableViewController;
    void feedbackDraftNavigationController;
    void form;
    void formStub;
    void localClient;
    void session;
    void setFeedbackFormReply;
    void shouldInitializeViews;
    void showsCompletionPage;
    void xpcClient;
}

- (void).cxx_destruct;
- (void)controller:(id)arg1 didAttachLocalFile:(id)arg2;
- (void)controller:(id)arg1 didClickSwitchAccountsWithCurrentUser:(id)arg2;
- (void)controller:(id)arg1 didFailToLoadDraftWithError:(id)arg2;
- (void)controller:(id)arg1 didFinishLoadingDraft:(id)arg2 devicesController:(id)arg3 draftingController:(id)arg4;
- (void)controller:(id)arg1 didFinishSubmissionWithError:(id)arg2;
- (void)controller:(id)arg1 didRequestDismissalWithSavedDraft:(bool)arg2;
- (void)controllerWillFinishSubmission:(id)arg1;
- (void)controllerWillResignFirstActive:(id)arg1;
- (void)deleteDraft;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)saveDraftWithIsClosing:(bool)arg1;
- (void)setFeedbackForm:(id)arg1 reply:(id /* block */)arg2;
- (void)setShowsCompletionPage:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;

@end

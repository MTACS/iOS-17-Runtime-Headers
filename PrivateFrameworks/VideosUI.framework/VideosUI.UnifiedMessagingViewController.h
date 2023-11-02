
@interface VideosUI.UnifiedMessagingViewController : VUIBaseViewController <AMSUIMessageViewControllerDelegate> {
    void messageViewController;
    void viewModel;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;

@end

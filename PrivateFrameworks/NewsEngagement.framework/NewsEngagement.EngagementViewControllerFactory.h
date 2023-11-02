
@interface NewsEngagement.EngagementViewControllerFactory : NSObject <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void delegate;
    void identifierKey;
    void messageIDKey;
    void offerKey;
    void placementKey;
    void sourceKey;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)init;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;

@end

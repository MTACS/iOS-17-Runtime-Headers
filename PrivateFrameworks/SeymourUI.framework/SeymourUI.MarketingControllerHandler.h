
@interface SeymourUI.MarketingControllerHandler : NSObject <AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void actionHandler;
    void eventHub;
    void marketingHostedContentCoordinator;
    void subscriptionToken;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)init;
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize { double x1; double x2; })arg2;
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;
- (void)messageViewControllerDidDismiss:(id)arg1;

@end

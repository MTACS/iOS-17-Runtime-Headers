
@interface PKSubcredentialMessageComposeViewController : UIViewController {
    <PKSubcredentialMessageComposeViewControllerDelegate> * _delegate;
    PKRemoteSubcredentialMessageComposeViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
    PKAppletSubcredentialSharingRequest * _sharingRequest;
}

@property (nonatomic) <PKSubcredentialMessageComposeViewControllerDelegate> *delegate;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSharingRequest:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end

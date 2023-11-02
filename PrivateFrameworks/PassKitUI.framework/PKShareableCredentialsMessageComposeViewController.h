
@interface PKShareableCredentialsMessageComposeViewController : UIViewController {
    PKAddShareablePassConfiguration * _configuration;
    <PKShareableCredentialsMessageComposeViewControllerDelegate> * _delegate;
    PKPartialShareInvitation * _partialShareInvite;
    NSArray * _recipientAddresses;
    PKRemoteShareableCredentialsMessageComposeViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (nonatomic) <PKShareableCredentialsMessageComposeViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *recipientAddresses;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithPartialShareInvite:(id)arg1 configuration:(id)arg2;
- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setupRemoteView;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPartialShareInvite:(id)arg1;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (id)recipientAddresses;
- (void)setDelegate:(id)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end

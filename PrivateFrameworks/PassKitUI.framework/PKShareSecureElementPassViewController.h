
@interface PKShareSecureElementPassViewController : UIViewController <PKClientShareSecureElementPassViewControllerDelegate> {
    <PKShareSecureElementPassViewControllerDelegate> * _delegate;
    unsigned long long  _environment;
    bool  _isFromPeopleScreen;
    PKSecureElementPass * _pass;
    bool  _promptToShareURL;
    WrappedRemoteViewController * _remoteVC;
    bool  _remoteVCConfigured;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKShareSecureElementPassViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool promptToShareURL;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_addRemoteVCToView;
- (void)_remoteDidGetConfigured;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (void)didCreateShareURL:(id)arg1 activationCode:(id)arg2 error:(id)arg3;
- (void)didFinishShareWithDidUserShare:(bool)arg1 error:(id)arg2;
- (id)init;
- (id)initWithSecureElementPass:(id)arg1 delegate:(id)arg2;
- (id)initWithSecureElementPass:(id)arg1 environment:(unsigned long long)arg2 isFromPeopleScreen:(bool)arg3 delegate:(id)arg4;
- (void)loadRemoteViewController;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (bool)promptToShareURL;
- (void)setDelegate:(id)arg1;
- (void)setPromptToShareURL:(bool)arg1;
- (void)setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldViewControllerBeAnimatedIn;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end

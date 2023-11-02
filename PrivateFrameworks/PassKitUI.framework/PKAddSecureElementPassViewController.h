
@interface PKAddSecureElementPassViewController : UIViewController <PKRemoteAddSecureElementPassViewControllerProtocol, UIViewControllerTransitioningDelegate> {
    PKCancelingAnimatedTransitioningHandler * _animatedTransitionHandler;
    PKAddSecureElementPassConfiguration * _configuration;
    <PKAddSecureElementPassViewControllerDelegate> * _delegate;
    _Atomic bool  _finished;
    PKRemoteAddSecureElementPassViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddSecureElementPassViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddSecureElementPassWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (void)didFinishWithPass:(id)arg1 error:(id)arg2;
- (void)didFinishWithPasses:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)loadRemoteViewController;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (void)setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

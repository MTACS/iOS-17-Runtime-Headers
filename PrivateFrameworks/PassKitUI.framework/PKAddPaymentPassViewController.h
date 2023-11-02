
@interface PKAddPaymentPassViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    PKCancelingAnimatedTransitioningHandler * _animatedTransitionHandler;
    PKAddPaymentPassRequestConfiguration * _configuration;
    <PKAddPaymentPassViewControllerDelegate> * _delegate;
    PKRemoteAddPaymentPassViewController * _remoteVC;
    _UIAsyncInvocation * _remoteVCRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddPaymentPassViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddPaymentPass;

- (void).cxx_destruct;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)arg1;
- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)loadRemoteViewController;
- (void)loadView;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

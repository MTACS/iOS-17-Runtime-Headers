
@interface PKAddPassesViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    PKCancelingAnimatedTransitioningHandler * _animatedTransitionHandler;
    PKAssertion * _contactlessInterfaceAssertion;
    <PKAddPassesViewControllerDelegate> * _delegate;
    NSData * _issuerData;
    NSArray * _passes;
    PKPassesXPCContainer * _passesContainer;
    unsigned long long  _presentationSource;
    PKRemoteAddPassesViewController * _remoteViewController;
    NSData * _signature;
    bool  _succeeded;
    bool  _viewHasAppeared;
    _UIAsyncInvocation * _viewServiceCancelRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddPassesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;
+ (bool)canAddPasses;

- (void).cxx_destruct;
- (void)_applyRemoteViewController:(id)arg1;
- (void)_aquireAssertions;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)arg1;
- (void)_ingestionDidFinishWithResult:(unsigned long long)arg1;
- (id)_initWithPasses:(id)arg1 orPassesContainer:(id)arg2 orIssuerData:(id)arg3 withSignature:(id)arg4 fromPresentationSource:(unsigned long long)arg5 error:(id*)arg6;
- (void)_requestRemoteViewController;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithIssuerData:(id)arg1 signature:(id)arg2 error:(id*)arg3;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithPasses:(id)arg1 fromPresentationSource:(unsigned long long)arg2;
- (id)initWithPassesContainer:(id)arg1 fromPresentationSource:(unsigned long long)arg2;
- (id)interactionControllerForPresentation:(id)arg1;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)succeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

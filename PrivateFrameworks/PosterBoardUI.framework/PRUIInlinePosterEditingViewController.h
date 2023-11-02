
@interface PRUIInlinePosterEditingViewController : UIViewController <PRUIExternallyHostedPosterEditingServiceDelegate, PRUIModalRemoteViewControllerDelegate, _PRUIInlinePosterEditingPlaceholderViewControllerDelegate> {
    <PRUIInlinePosterEditingViewControllerDelegate> * _delegate;
    <PRUIModalEntryPoint> * _entryPoint;
    PRUIModalRemoteViewController * _fallbackViewController;
    <PRUIExternallyHostedPosterEditingRequest> * _remoteEditingRequest;
    PRUIExternallyHostedPosterEditingService * _remoteEditingService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRUIInlinePosterEditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getEditingViewControllerIfPossible;
- (bool)_isPresentingRemoteOrLocalEditingUI;
- (void)_shared_didDismissWithResponse:(id)arg1;
- (void)_shared_willDismissWithResponse:(id)arg1;
- (id)delegate;
- (void)didEndEditingWithResponse:(id)arg1;
- (id)initWithEntryPoint:(id)arg1;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)modalRemoteViewController:(id)arg1 willDismissWithResponse:(id)arg2;
- (void)placeholderViewController:(id)arg1 requestsDismissalWithAnimation:(bool)arg2;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)sendRequestDismissalAction;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)willEndEditingWithResponse:(id)arg1;

@end

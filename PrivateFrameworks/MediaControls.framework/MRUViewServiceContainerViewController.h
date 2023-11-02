
@interface MRUViewServiceContainerViewController : UIViewController <MRUViewServiceRoutingViewControllerDelegate, MRUViewServiceViewController, UIPopoverPresentationControllerDelegate, UIViewControllerTransitioningDelegate> {
    MPMediaControlsConfiguration * _configuration;
    id /* block */  _customRowTappedBlock;
    id /* block */  _dismissalBlock;
    MTMaterialView * _materialView;
    MRUViewServiceRoutingViewController * _routingViewController;
    UIView * _sourceView;
}

@property (nonatomic, retain) MPMediaControlsConfiguration *configuration;
@property (nonatomic, copy) id /* block */ customRowTappedBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissalBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMaterialView *materialView;
@property (nonatomic, retain) MRUViewServiceRoutingViewController *routingViewController;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)configuration;
- (id /* block */)customRowTappedBlock;
- (id /* block */)dismissalBlock;
- (id)init;
- (id)materialView;
- (bool)prefersStatusBarHidden;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)routingViewController;
- (void)setConfiguration:(id)arg1;
- (void)setCustomRowTappedBlock:(id /* block */)arg1;
- (void)setDismissalBlock:(id /* block */)arg1;
- (void)setMaterialView:(id)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setSourceView:(id)arg1;
- (bool)shouldUsePopoverAnchor;
- (id)sourceView;
- (void)transitionToVisible:(bool)arg1 animated:(bool)arg2;
- (void)updateMaterialForPresenting:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewServiceRoutingViewControllerDidChangeSize:(id)arg1;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)arg1;
- (void)viewServiceRoutingViewControllerDidDismiss:(id)arg1 withCustomRowTapped:(id)arg2;

@end


@interface SBPosterEditingTransientOverlayViewController : SBTransientOverlayViewController <PRUIModalRemoteViewControllerDelegate> {
    <SBPosterEditingTransientOverlayViewControllerDelegate> * _delegate;
    <PRUIExternallyHostedPosterEditingRequest> * _editingRequest;
    unsigned int  _hasNotifiedDelegateOfDidDismiss;
    unsigned int  _hasNotifiedDelegateOfWillDismiss;
    PRUIModalRemoteViewController * _remoteViewController;
    bool  _synthesizeDelegateCallbacksFromAppearanceTransitions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBPosterEditingTransientOverlayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) <PRUIExternallyHostedPosterEditingRequest> *editingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool synthesizeDelegateCallbacksFromAppearanceTransitions;

- (void).cxx_destruct;
- (void)_notifyDelegateOfDidDismissWithResponse:(id)arg1;
- (void)_notifyDelegateOfWillDismissWithResponse:(id)arg1;
- (bool)allowsStackingOverlayContentAbove;
- (id)delegate;
- (id)editingRequest;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (void)handleGestureDismissal;
- (bool)handleHomeButtonPress;
- (id)initWithEditingRequest:(id)arg1;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)modalRemoteViewController:(id)arg1 willDismissWithResponse:(id)arg2;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (bool)prefersEmbeddedDisplayPresentation;
- (bool)prefersStatusBarHidden;
- (void)sendRequestDismissalAction;
- (void)setDelegate:(id)arg1;
- (void)setSynthesizeDelegateCallbacksFromAppearanceTransitions:(bool)arg1;
- (bool)synthesizeDelegateCallbacksFromAppearanceTransitions;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillDisappear:(bool)arg1;

@end

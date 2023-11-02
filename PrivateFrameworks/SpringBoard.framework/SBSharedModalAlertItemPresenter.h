
@interface SBSharedModalAlertItemPresenter : NSObject <SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBModalViewControllerStackDelegate, SBReachabilityObserver, UIAlertControllerCoordinatedActionPerforming, _SBAlertControllerDelegate> {
    SBAlertLayoutPresentationVerifier * _alertLayoutPresentationVerifier;
    SBBarSwipeAffordanceView * _barSwipeView;
    <SBFLockOutStatusProvider> * _lockOutProvider;
    SBModalViewControllerStack * _modalViewControllerStack;
    SBReachabilityManager * _reachabilityManager;
    SBSystemGestureManager * _systemGestureManager;
    SBWindow * _window;
    SBFZStackParticipant * _zStackParticipant;
    SBFZStackResolver * _zStackResolver;
}

@property (nonatomic, readonly) SBAlertItem *currentlyPresentedAlertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_modalViewControllerStack, setter=_setModalViewControllerStack:, nonatomic, retain) SBModalViewControllerStack *modalViewControllerStack;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (id)_modalViewControllerStack;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(id /* block */)arg2 dismissControllerBlock:(id /* block */)arg3;
- (void)_setModalViewControllerStack:(id)arg1;
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;
- (void)_updateHomeGestureParticipant;
- (void)alertControllerDidDisappear:(id)arg1;
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (id)currentlyPresentedAlertItem;
- (void)dealloc;
- (void)dismissAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)handleReachabilityYOffsetDidChange;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)homeGrabberViewDidReceiveClick:(id)arg1;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 reachabilityManager:(id)arg3 alertLayoutPresentationVerifier:(id)arg4 windowScene:(id)arg5;
- (id)initWithLockOutProvider:(id)arg1 systemGestureManager:(id)arg2 reachabilityManager:(id)arg3 alertLayoutPresentationVerifier:(id)arg4 windowScene:(id)arg5 enableGestures:(bool)arg6;
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2 animated:(bool)arg3;
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;
- (void)presentAlertItem:(id)arg1 isLocked:(bool)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)windowScene;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end

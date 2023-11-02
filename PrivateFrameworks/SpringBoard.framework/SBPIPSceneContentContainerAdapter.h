
@interface SBPIPSceneContentContainerAdapter : NSObject <SBDeviceApplicationSceneHandleObserver, SBKeyboardDismissalParticipant, SBLayoutStateTransitionObserver, SBPIPContainerViewControllerAdapter, SBPIPStashableWrapperViewControllerDelegate, SBWorkspaceKeyboardFocusControllerObserver> {
    SBPIPContainerViewController<SBPIPContainerViewControllerAdapterContextProviding> * _containerViewController;
    <SBPIPSceneContentContainerAdapterDelegate> * _delegate;
    SBPIPInteractionSettings * _interactionSettings;
    bool  _invalidated;
    __UIKeyboardArbiterManager * _keyboardArbiterManager;
    SBKeyboardDismissalManager * _keyboardDismissalManager;
    <BSInvalidatable> * _keyboardDismissalParticipantHandle;
    SBWorkspaceKeyboardFocusController * _keyboardFocusController;
    <BSInvalidatable> * _keyboardFocusObserver;
    <BSInvalidatable> * _keyboardSuppressionAssertion;
    SBKeyboardSuppressionManager * _keyboardSuppressionManager;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumStashTabSize;
    UIViewController<SBPIPSceneContentProviding> * _sceneContentViewController;
    UIApplicationSceneDeactivationAssertion * _sceneDeactivationAssertion;
    SBPIPStashableWrapperViewController * _stashableWrappingViewController;
    SBLayoutStateTransitionCoordinator * _transitionCoordinator;
}

@property (nonatomic, readonly) SBPIPContainerViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *overrideResourcesUsageReductionTimeout;
@property (nonatomic, readonly) UIViewController<SBPIPSceneContentProviding> *sceneContentViewController;
@property (nonatomic, readonly) bool shouldSuppressAssociatedElementsInSystemAperture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissKeyboardIfNecessaryForTransitionContext:(id)arg1;
- (long long)_effectiveEnvironmentModeForTransitionContext:(id)arg1;
- (bool)_hitTestTouch:(id)arg1 inWindow:(id)arg2;
- (id)_hostedAppSceneHandle;
- (bool)_hostedSceneIsPresentingKeyboard;
- (bool)_tapInEnvironmentCanDismiss:(long long)arg1;
- (void)_updateDisplayLayoutElementKeyboardFocus:(bool)arg1;
- (id)bundleIdentifierForContainerViewController:(id)arg1;
- (id)containerViewController;
- (void)containerViewController:(id)arg1 didSettleOnStashState:(bool)arg2;
- (void)containerViewController:(id)arg1 didUpdateStashProgress:(double)arg2;
- (void)containerViewController:(id)arg1 didUpdateStashState:(bool)arg2 springSettings:(id)arg3;
- (void)containerViewController:(id)arg1 handleDestructionRequestForSceneHandle:(id)arg2;
- (bool)containerViewController:(id)arg1 shouldHandleStashingForTransitionContext:(id)arg2;
- (void)containerViewController:(id)arg1 wantsStashTabHidden:(bool)arg2 left:(bool)arg3 springSettings:(id)arg4 completion:(id /* block */)arg5;
- (void)containerViewController:(id)arg1 willBeginInteractionWithGestureRecognizer:(id)arg2;
- (void)containerViewController:(id)arg1 willUpdateStashState:(bool)arg2;
- (void)containerViewControllerDidEndInteraction:(id)arg1 targetWindowScene:(id)arg2;
- (void)containerViewControllerDidEndSizeChange:(id)arg1;
- (void)containerViewControllerPanGestureDidEnd:(id)arg1;
- (bool)containerViewControllerShouldRequireMedusaKeyboard:(id)arg1;
- (void)containerViewControllerWillBeginSizeChange:(id)arg1 behavior:(int)arg2;
- (id)contentViewControllerForContainerViewController:(id)arg1;
- (void)dealloc;
- (id)hostedAppSceneHandleForContainerViewController:(id)arg1;
- (id)initWithSceneContentViewController:(id)arg1 contentViewLayoutSettings:(id)arg2 stashSettings:(id)arg3 shadowSettings:(id)arg4 interactionSettings:(id)arg5 keyboardArbiterManager:(id)arg6 keyboardFocusController:(id)arg7 keyboardSuppressionManager:(id)arg8 keyboardDismissalManager:(id)arg9 deactivationManager:(id)arg10 transitionCoordinator:(id)arg11 delegate:(id)arg12;
- (void)invalidate;
- (bool)isStashTabHiddenForContainerViewController:(id)arg1;
- (bool)keyboardDismissalManager:(id)arg1 shouldPreventDismissalForTouch:(id)arg2 inWindow:(id)arg3;
- (void)keyboardFocusController:(id)arg1 externalSceneDidAcquireFocus:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)loadSubviewsForContainerViewController:(id)arg1;
- (int)processIdentifierForContainerViewController:(id)arg1;
- (id)sceneContentViewController;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (id)scenePersistenceIdentifierForContainerViewController:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (bool)stashableWrapper:(id)arg1 didReceivedTapGesture:(id)arg2;
- (void)stashableWrapper:(id)arg1 didTransitionToStashed:(bool)arg2;

@end

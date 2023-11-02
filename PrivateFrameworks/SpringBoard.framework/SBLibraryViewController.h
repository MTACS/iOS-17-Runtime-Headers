
@interface SBLibraryViewController : SBHLibraryViewController <SBBarSwipeAffordanceControllingDelegate, SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBHLibraryViewControllerObserver, SBLayoutStateTransitionObserver> {
    SBAsynchronousRenderingAssertion * _asynchronousRenderingAssertion;
    <BSInvalidatable> * _expandedPodDisplayLayoutElementAssertion;
    ATXAppDirectoryClient * _loggingClient;
    bool  _rotating;
    SBSceneManager * _sceneManager;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarSettingsAssertion;
    <BSInvalidatable> * _useSnapshotAsBackgroundViewAssertion;
}

@property (nonatomic, retain) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion;
@property (nonatomic, retain) SBBarSwipeAffordanceViewController *barSwipeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BSInvalidatable> *expandedPodDisplayLayoutElementAssertion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXAppDirectoryClient *loggingClient;
@property (getter=isRotating, nonatomic) bool rotating;
@property (nonatomic, readonly) SBSceneManager *sceneManager;
@property (nonatomic, retain) SBWindowSceneStatusBarSettingsAssertion *statusBarSettingsAssertion;
@property (readonly) Class superclass;
@property (nonatomic, retain) <BSInvalidatable> *useSnapshotAsBackgroundViewAssertion;

- (void).cxx_destruct;
- (void)_acquireUseSnapshotAsBackgroundViewAssertionIfNecessary;
- (bool)_canHandleKeyEvents;
- (bool)_canHandleKeyUIEvent:(id)arg1;
- (void)_didActivateTypeAheadSearchWithPhysicalKeyboardEvent:(id)arg1;
- (void)_evaluateAffordanceActivation;
- (void)_evaluateAsyncRenderingAssertion;
- (void)_evaluateFirstResponderStatus;
- (void)_handlePressesBegan:(id)arg1;
- (bool)_isPresentationForegroundModal;
- (void)_setExpandedPodDisplayLayoutElementActive:(bool)arg1;
- (void)_setStatusBarSettingsAssertionActive:(bool)arg1;
- (void)_setStatusBarSettingsAssertionActive:(bool)arg1 quickly:(bool)arg2;
- (id)asynchronousRenderingAssertion;
- (unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)expandedPodDisplayLayoutElementAssertion;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (id)initWithCategoryMapProvider:(id)arg1 windowScene:(id)arg2;
- (bool)isRotating;
- (id)keyboardHomeAffordanceAssertionForBarSwipeAffordanceControlling:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)libraryViewController:(id)arg1 didDismissSearchController:(id)arg2;
- (void)libraryViewController:(id)arg1 didPresentSearchController:(id)arg2;
- (void)libraryViewController:(id)arg1 willDismissFolderController:(id)arg2;
- (void)libraryViewController:(id)arg1 willDismissSearchController:(id)arg2;
- (void)libraryViewController:(id)arg1 willPresentFolderController:(id)arg2;
- (void)libraryViewControllerDidDismiss:(id)arg1;
- (void)libraryViewControllerDidPresent:(id)arg1;
- (void)libraryViewControllerWillDismiss:(id)arg1;
- (void)libraryViewControllerWillPresent:(id)arg1;
- (id)loggingClient;
- (void)overlayController:(id)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(bool)arg4;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)sceneManager;
- (void)setAsynchronousRenderingAssertion:(id)arg1;
- (void)setExpandedPodDisplayLayoutElementAssertion:(id)arg1;
- (void)setPresenter:(id)arg1;
- (void)setRotating:(bool)arg1;
- (void)setStatusBarSettingsAssertion:(id)arg1;
- (void)setUseSnapshotAsBackgroundViewAssertion:(id)arg1;
- (id)statusBarSettingsAssertion;
- (void)traitCollectionDidChange:(id)arg1;
- (id)useSnapshotAsBackgroundViewAssertion;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)zStackParticipant:(id)arg1 updatePreferences:(id)arg2;
- (void)zStackParticipantDidChange:(id)arg1;

@end


@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKAuthorizationCoverSheetViewControllerDelegate, PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming> {
    PKBackgroundContactlessInterfaceSessionController * _backgroundContactlessInterfaceSession;
    id /* block */  _blockingUIForUserAuthorizationCompletion;
    bool  _brightnessRampingAllowed;
    PKAuthenticator * _coverSheetAuthenticator;
    PKAuthorizationCoverSheetViewController * _coverSheetViewController;
    bool  _currentShowWhileLockedValue;
    NSArray * _fieldPassUniqueIdentifiers;
    PKFieldProperties * _fieldProperties;
    NSObject<OS_dispatch_group> * _fieldPropertiesLookupGroup;
    bool  _hasAquiredStaticResources;
    long long  _invalidationStatus;
    bool  _isBlockingUIForUserAuthorization;
    bool  _isLockScreenPresented;
    SBSAssertion * _lockButtonAssertion;
    <BSInvalidatable> * _lockButtonObserver;
    PKAssertion * _notificationSuppressionAssertion;
    PKPassGroupsViewController * _passGroupsViewController;
    NSString * _passUniqueIdentifier;
    CLInUseAssertion * _passbookForegroundAssertion;
    PKPaymentService * _paymentService;
    long long  _presentationSource;
    unsigned long long  _presentationStartTime;
    bool  _processHomeButtonEvents;
    bool  _shouldViewAnimateIn;
    bool  _showCoverSheet;
    struct { 
        long long screen; 
        bool appeared; 
        bool viewLoaded; 
        bool hasShownPassGroups; 
    }  _state;
    id  _staticGlyphResources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;
+ (bool)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(long long)arg1 hasUserBeenAuthenticated:(bool)arg2 passUniqueID:(id)arg3;

- (void).cxx_destruct;
- (void)_acquireStaticResources;
- (id)_activeViewController;
- (void)_animateViewBackgroundColorIn:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_dismissForSource:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_dismissIfRestricted;
- (void)_insertViewControllerIfNeeded:(id)arg1;
- (void)_invalidate;
- (void)_invalidateForType:(long long)arg1;
- (bool)_isInGroup;
- (bool)_notificationIsFromChildViewController:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_presentPassAnimated:(bool)arg1 externalizedContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)_releaseUIBlockIfNeededTimeout:(bool)arg1;
- (void)_removeViewController:(id)arg1;
- (void)_setupCoverSheetIfNeeded;
- (void)_setupGroupControllerIfNeeded;
- (void)_startBackgroundContactlessInterfaceSessionIfNeeded;
- (void)_startGroupControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_transitionToAppeared;
- (void)_transitionToViewState:(struct { long long x1; bool x2; bool x3; bool x4; })arg1 animated:(bool)arg2;
- (void)_transitionToViewStateScreen:(long long)arg1 animated:(bool)arg2;
- (void)authorizationCoverSheetViewControllerDidCompleteWithSuccess:(bool)arg1;
- (void)authorizationCoverSheetViewControllerDidGetBiometricUnavailableOrFailure;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)arg1;
- (id)init;
- (void)loadView;
- (void)openApplication:(id)arg1;
- (void)prepareForActivationWithContext:(id)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

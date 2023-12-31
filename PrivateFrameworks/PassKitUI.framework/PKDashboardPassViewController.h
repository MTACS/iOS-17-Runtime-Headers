
@interface PKDashboardPassViewController : PKDashboardViewController <BKOperationDelegate, PKAccountServiceObserver, PKDashboardMoreMenuFactoryDelegate, PKDashboardPassTilesItemPresenterDelegate, PKDashboardPaymentPassDataSourceDelegate, PKForegroundActiveArbiterObserver, PKInvalidatable, _PKVisibilityBackdropViewDelegate> {
    PKDashboardAccountModulePresenter * _accountModulePresenter;
    PKAccountService * _accountService;
    PKPassPresentationContext * _context;
    NFDCKAssertion * _dckAssertion;
    unsigned int  _deactivationReasons;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultPasscodeButtonSize;
    BKPresenceDetectOperation * _fingerDetectionOperation;
    bool  _fingerPresent;
    NSObject<OS_dispatch_source> * _fingerTimer;
    _PKVisibilityBackdropView * _footerBackground;
    bool  _footerVisible;
    struct { 
        bool foreground; 
        bool foregroundActive; 
    }  _foregroundActiveState;
    PKPass * _frontmostPass;
    PKPaymentPass * _frontmostPaymentPass;
    _Atomic bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKDashboardMoreMenuFactory * _moreMenuFactory;
    NSArray * _navBarButtonTypes;
    PKDashboardPassFlowLayout * _passFlowLayout;
    UIButton * _passcodeButton;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _sessionHandles;
    PKDashboardPaymentTransactionItemPresenter * _transactionPresenter;
    unsigned char  _visibility;
}

@property (nonatomic, readonly) PKDashboardAccountModulePresenter *accountModulePresenter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKDashboardPassViewControllerDelegate><PKDashboardDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPass *frontmostPass;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) PKDashboardPassFlowLayout *passFlowLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKDashboardPaymentTransactionItemPresenter *transactionPresenter;

- (void).cxx_destruct;
- (void)_afterDataSourceContentLoadedUpdateNavigationItemsForPass:(id)arg1;
- (void)_createFooter;
- (id)_dashboardInfoButtonWithImage:(id)arg1;
- (void)_displayAccountErrorIfNecessary;
- (void)_handleUpdatedAccount:(id)arg1 accountRemoved:(bool)arg2;
- (bool)_isBackgrounded;
- (bool)_isDeactivated;
- (bool)_isForegroundActive;
- (double)_navBarButtonSpaceWidth;
- (id)_navigationBarButtonForType:(unsigned long long)arg1 account:(id)arg2;
- (id)_navigationBarButtonTypesForAppleCardPass:(id)arg1 account:(id)arg2;
- (id)_navigationBarButtonTypesForPeerPaymentPass:(id)arg1;
- (id)_passcodeButtonTitle;
- (void)_passcodeTapped:(id)arg1;
- (void)_performActivationStateUpdate:(id /* block */)arg1;
- (void)_setupNavigationItemsAnimated:(bool)arg1;
- (id)_shareNavigationBarButtonTypesForPass:(id)arg1;
- (void)_updateDefaultPasscodeButtonSize;
- (void)_updateDigitalCarKeyAssertion;
- (void)_updateFingerDetection;
- (void)_updateFooterAnimated:(bool)arg1;
- (void)_updateNavigationItemsWithAccount:(id)arg1;
- (void)_updatePasscodeButtonTitle;
- (void)_visibilityDidChange;
- (void)accountAdded:(id)arg1;
- (void)accountChanged:(id)arg1;
- (id)accountModulePresenter;
- (void)accountRemoved:(id)arg1;
- (id)bigInfoButton;
- (void)configureMoreMenuFactoryWithPass:(id)arg1;
- (void)dealloc;
- (id)doneButton;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateDeactivationReasons:(unsigned int)arg2;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(struct { bool x1; bool x2; })arg2;
- (id)frontmostPass;
- (void)infoTapped:(id)arg1;
- (id)initWithDataSource:(id)arg1 presenters:(id)arg2 layout:(id)arg3;
- (id)initWithPass:(id)arg1;
- (id)initWithPassGroupView:(id)arg1 context:(id)arg2 presentingViewController:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (void)loadView;
- (void)menuFactoryDidUpdateMenu:(id)arg1;
- (id)moreInfoButton;
- (void)moreMenuTriggered:(id)arg1;
- (id)navigationDashboardPassVC;
- (void)operation:(id)arg1 presenceStateChanged:(bool)arg2;
- (id)passFlowLayout;
- (void)passTilesItemPresenter:(id)arg1 executeSEActionForPass:(id)arg2 tile:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)presentActivityDeletionConfirmationWithCompletion:(id /* block */)arg1;
- (id)presentCardNumbersButtonForAccount:(id)arg1;
- (void)reloadMoreMenuItemsWithMenu:(id)arg1;
- (void)reloadNavigationBarAnimated:(bool)arg1;
- (void)reportEventForPassIfNecessary:(id)arg1;
- (id)searchButton;
- (void)setFrontmostPass:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transactionPresenter;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end

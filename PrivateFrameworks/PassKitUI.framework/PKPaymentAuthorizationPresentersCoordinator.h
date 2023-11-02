
@interface PKPaymentAuthorizationPresentersCoordinator : NSObject <PKPaymentAuthorizationFlowCoordinatorDelegate, PKPaymentAuthorizationScenePresenter, SBSRemoteAlertHandleObserver> {
    PKPaymentAuthorizationFlowCoordinator * _flowCoordinator;
    NSDictionary * _hostUserInfo;
    PKAsyncTaskProgressTracker * _invalidationTracker;
    PKPaymentAuthorizationPresentationTarget * _primaryTarget;
    PKPaymentAuthorizationPresentationTarget * _secondaryTarget;
    SBSRemoteAlertHandle * _secondaryTargetAlertHandle;
    bool  _shouldRequestSecondaryViewControllerPresenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaymentAuthorizationFlowCoordinator *flowCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *hostUserInfo;
@property (nonatomic, retain) PKAsyncTaskProgressTracker *invalidationTracker;
@property (nonatomic, retain) PKPaymentAuthorizationPresentationTarget *primaryTarget;
@property (nonatomic, retain) PKPaymentAuthorizationPresentationTarget *secondaryTarget;
@property (nonatomic, retain) SBSRemoteAlertHandle *secondaryTargetAlertHandle;
@property (nonatomic) bool shouldRequestSecondaryViewControllerPresenter;
@property (readonly) Class superclass;

+ (void)coordinatorDidInvalidate:(id)arg1;
+ (id)coordinatorForHostWithUserInfo:(id)arg1;
+ (id)coordinators;
+ (void)invalidateCoordinators:(id)arg1;

- (void).cxx_destruct;
- (void)askForDismissalWithReason:(unsigned long long)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)configureSceneWithPrimaryPresentationMode:(long long)arg1;
- (void)dealloc;
- (void)dismissSceneAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)dismissSecondaryViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)flowCoordinator;
- (void)flowCoordinatorDidInvalidate;
- (bool)handleHomeButtonPressedInViewController:(id)arg1;
- (id)hostUserInfo;
- (id)initWithHostUserInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateSecondaryAlert;
- (id)invalidationTracker;
- (bool)isPresentationModeForPrimaryViewController:(long long)arg1;
- (void)notifyOnInvalidated:(id /* block */)arg1;
- (void)presentPrimaryViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentSecondaryViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)primaryTarget;
- (void)primaryViewController:(id)arg1 didActivateWithPresentationMode:(long long)arg2;
- (void)requestSecondaryViewControllerPresenterIfNecessary;
- (id)secondaryTarget;
- (id)secondaryTargetAlertHandle;
- (void)secondaryViewController:(id)arg1 didActivateWithPresentationMode:(long long)arg2;
- (void)setFlowCoordinator:(id)arg1;
- (void)setHostUserInfo:(id)arg1;
- (void)setInvalidationTracker:(id)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (void)setSecondaryTarget:(id)arg1;
- (void)setSecondaryTargetAlertHandle:(id)arg1;
- (void)setShouldRequestSecondaryViewControllerPresenter:(bool)arg1;
- (bool)shouldRequestSecondaryViewControllerPresenter;
- (bool)shouldSecondaryViewControllerBeRequestedInSceneWithPresentationMode:(long long)arg1;
- (void)start;
- (bool)supportsSecondaryViewController;
- (void)viewController:(id)arg1 didActivateWithPresentationMode:(long long)arg2;
- (void)viewControllerDidInvalidate:(id)arg1;
- (void)viewControllerWillAppear:(id)arg1;
- (void)viewControllerWillDisappear:(id)arg1;

@end

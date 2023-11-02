
@interface TSSIMSetupFlow : NSObject <TSSIMSetupFlowDelegate, UIAdaptivePresentationControllerDelegate> {
    NSMutableDictionary * _backOptions;
    <TSSIMSetupDelegate> * _delegate;
    UIViewController * _dismissingViewController;
    UIViewController * _firstViewControllerInstance;
    bool  _isFlowFinished;
    UINavigationController * _navigationController;
    UIViewController<TSSetupFlowItem> * _nextViewController;
    TSSIMSetupFlow * _parentFlow;
    UIViewController<TSSetupFlowItem> * _topViewController;
}

@property (retain) NSMutableDictionary *backOptions;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property UIViewController *dismissingViewController;
@property (retain) UIViewController *firstViewControllerInstance;
@property (readonly) unsigned long long hash;
@property bool isFlowFinished;
@property UINavigationController *navigationController;
@property UIViewController<TSSetupFlowItem> *nextViewController;
@property TSSIMSetupFlow *parentFlow;
@property (readonly) Class superclass;
@property UIViewController<TSSetupFlowItem> *topViewController;

+ (void)bootstrapTransferFlowWithSession:(id)arg1 transferablePlanOnSource:(bool)arg2;
+ (id)createTSRemotePlanWebsheetContext:(id)arg1;
+ (id)flowWithOptions:(id)arg1;
+ (id)initActivationCodeRequireSetup:(bool)arg1;
+ (id)initWithActivationCodeOnlyFlow;
+ (id)initWithAppName:(id)arg1 requireSetup:(bool)arg2;
+ (id)initWithAppName:(id)arg1 requireSetup:(bool)arg2 skipGeneralInstallConsent:(bool)arg3;
+ (id)initWithOptions:(id)arg1;
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(bool)arg2;
+ (id)initWithSetupFlowWithIccid:(id)arg1 showAddPlan:(bool)arg2 forceDualSIMSetup:(bool)arg3;
+ (void)needsToRun:(id /* block */)arg1;
+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(id /* block */)arg2;
+ (void)needsToRunUsingMessageSession:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_maybeClearSubFlow;
- (bool)_needCustomizeBackAction:(id)arg1;
- (void)_notifyFlowCompletion:(unsigned long long)arg1;
- (void)_popAllSIMSetupFlowViewControllers:(id)arg1;
- (void)_pushStartOverViewController:(id)arg1 from:(id)arg2;
- (bool)_startOver:(id)arg1;
- (void)appBackgrounded;
- (void)appForegrounded;
- (void)attemptFailed;
- (id)backOptions;
- (void)cancelNextPane;
- (id)delegate;
- (id)dismissingViewController;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)firstViewControllerInstance;
- (id)init;
- (bool)isFlowFinished;
- (void)maybeRegisterDismissHandler:(id)arg1;
- (void)navigateToNextPaneFrom:(id)arg1 navigationController:(id)arg2;
- (id)navigationController;
- (id)nextViewController;
- (id)nextViewControllerFrom:(id)arg1;
- (id)parentFlow;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)receivedResponse;
- (void)receivedResponseWithVC:(id)arg1;
- (void)restartWith:(id)arg1;
- (id)rootViewController;
- (void)setBackOptions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissingViewController:(id)arg1;
- (void)setFirstViewControllerInstance:(id)arg1;
- (void)setIsFlowFinished:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setNextViewController:(id)arg1;
- (void)setParentFlow:(id)arg1;
- (void)setTopViewController:(id)arg1;
- (void)showFirstViewControllerWithHostController:(id)arg1 completion:(id /* block */)arg2;
- (void)showLoadFailureAlert:(id)arg1;
- (void)startOverWithFirstViewController:(id /* block */)arg1;
- (id)topViewController;
- (void)userDidTapCancel;
- (void)viewControllerDidComplete:(id)arg1;
- (void)waitForResponse:(id)arg1;

@end

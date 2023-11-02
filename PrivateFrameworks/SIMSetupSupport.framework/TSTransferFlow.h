
@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    bool  _confirmationCodeRequired;
    id /* block */  _firstViewControllerCallback;
    bool  _hasTransferablePlan;
    bool  _isActivationPolicyMismatch;
    bool  _isAvailableOptionsQueryCompleted;
    bool  _isDualeSIMCapablityLoss;
    bool  _isStandaloneProximityTransfer;
    TSTransferFlowModel * _model;
    NSString * _name;
    CTDisplayPlanList * _pendingInstallItems;
    NSError * _planInstallError;
    NSObject<OS_dispatch_group> * _queryGroup;
    CUMessageSession * _session;
    id  _transferBackPlan;
    NSArray * _transferItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ firstViewControllerCallback;
@property bool hasTransferablePlan;
@property (readonly) unsigned long long hash;
@property bool isAvailableOptionsQueryCompleted;
@property bool isStandaloneProximityTransfer;
@property (retain) TSTransferFlowModel *model;
@property (retain) CUMessageSession *session;
@property (readonly) Class superclass;
@property (retain) id transferBackPlan;

+ (void)needsToRunUsingMessageSession:(id)arg1 completion:(id /* block */)arg2;
+ (void)needsToRunUsingMessageSession:(id)arg1 transferablePlanOnSource:(bool)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_createIntroViewController;
- (id)_firstViewController:(id)arg1;
- (bool)_hasTransferablePlan:(id)arg1;
- (void)_userDidTapCancel;
- (void)dealloc;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id /* block */)firstViewControllerCallback;
- (bool)hasTransferablePlan;
- (id)init;
- (id)initWithSession:(id)arg1 hasTransferablePlan:(bool)arg2 isStandaloneProximityTransfer:(bool)arg3 transferBackPlan:(id)arg4;
- (bool)isAvailableOptionsQueryCompleted;
- (bool)isStandaloneProximityTransfer;
- (id)model;
- (id)nextViewControllerFrom:(id)arg1;
- (id)session;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)setFirstViewControllerCallback:(id /* block */)arg1;
- (void)setHasTransferablePlan:(bool)arg1;
- (void)setIsAvailableOptionsQueryCompleted:(bool)arg1;
- (void)setIsStandaloneProximityTransfer:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTransferBackPlan:(id)arg1;
- (void)startOverWithFirstViewController:(id /* block */)arg1;
- (id)transferBackPlan;
- (void)viewControllerDidComplete:(id)arg1;

@end

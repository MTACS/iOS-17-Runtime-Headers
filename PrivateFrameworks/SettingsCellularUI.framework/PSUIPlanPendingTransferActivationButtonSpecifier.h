
@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    CTCellularPlanManager * _cellularPlanManager;
    TSSIMSetupFlow * _flow;
    PSListController * _hostController;
    UINavigationController * _navigationController;
    id  _originAccessoryView;
    CTCellularPlanPendingTransfer * _plan;
    UIActivityIndicatorView * _spinner;
    UIViewController * _topViewController;
}

@property (nonatomic, retain) CTCellularPlanManager *cellularPlanManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (nonatomic, retain) CTCellularPlanPendingTransfer *plan;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) UIViewController *topViewController;

- (void).cxx_destruct;
- (void)activatePlanPendingTransfer:(id)arg1;
- (id)cellularPlanManager;
- (id)flow;
- (id)getLogger;
- (id)hostController;
- (id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2;
- (id)plan;
- (void)setCellularPlanManager:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setPlan:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setSpecifierProperties;
- (void)setSpinner:(id)arg1;
- (void)setTopViewController:(id)arg1;
- (void)showSpinner:(bool)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (id)spinner;
- (id)topViewController;

@end

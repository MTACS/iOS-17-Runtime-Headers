
@interface PSUIAddCellularPlanSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    UIViewController * _firstViewController;
    TSSIMSetupFlow * _flow;
    PSListController * _hostController;
    bool  _isEmbeddedInCarrierList;
    bool  _isRequestingFirstViewController;
    id  _originAccessoryView;
    CTCellularPlanManager * _planManager;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property UIViewController *firstViewController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property bool isEmbeddedInCarrierList;
@property bool isRequestingFirstViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_showWifiAlert;
- (void)addCellularPlanCellPressed:(id)arg1;
- (void)cellularPlanChanged;
- (id)firstViewController;
- (id)flow;
- (id)getLogger;
- (id)hostController;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2;
- (id)initWithHostController:(id)arg1 isEmbeddedInCarrierList:(bool)arg2 planManager:(id)arg3;
- (bool)isEmbeddedInCarrierList;
- (bool)isRequestingFirstViewController;
- (void)setFirstViewController:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)setIsEmbeddedInCarrierList:(bool)arg1;
- (void)setIsRequestingFirstViewController:(bool)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setUpeSIMNeeded;
- (void)showSpinner:(bool)arg1;
- (void)simSetupFlowCompleted:(unsigned long long)arg1;
- (long long)userConsentResponse;

@end

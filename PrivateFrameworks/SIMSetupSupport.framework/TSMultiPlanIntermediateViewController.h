
@interface TSMultiPlanIntermediateViewController : TSOBTableWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource> {
    NSArray * _buttons;
    CTDisplayPlanList * _carrierSetupItems;
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _inBuddy;
    bool  _installingTransferPlan;
    bool  _isOtherButtonTapped;
    bool  _isStandaloneProximityFlow;
    bool  _isTransferListCellTapped;
    CTDisplayPlanList * _pendingInstallItems;
    bool  _showOtherOptions;
    bool  _showSIMSetup;
    NSLayoutConstraint * _tableHeightAnchor;
    NSArray * _transferItems;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool installingTransferPlan;
@property bool isOtherButtonTapped;
@property bool isStandaloneProximityFlow;
@property bool isTransferListCellTapped;
@property bool showSIMSetup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_heightAnchorConstant;
- (void)_otherButtonTapped;
- (void)_skipButtonTapped;
- (id)delegate;
- (id)initWithPendingInstallItems:(id)arg1;
- (id)initWithTransferItems:(id)arg1 pendingInstallItems:(id)arg2 carrierSetupItems:(id)arg3 showOtherOptions:(bool)arg4;
- (id)initWithTransferItems:(id)arg1 pendingInstallItems:(id)arg2 carrierSetupItems:(id)arg3 showOtherOptions:(bool)arg4 isStandaloneProximityFlow:(bool)arg5;
- (id)initWithTransferItems:(id)arg1 showOtherOptions:(bool)arg2;
- (bool)installingTransferPlan;
- (bool)isOtherButtonTapped;
- (bool)isStandaloneProximityFlow;
- (bool)isTransferListCellTapped;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstallingTransferPlan:(bool)arg1;
- (void)setIsOtherButtonTapped:(bool)arg1;
- (void)setIsStandaloneProximityFlow:(bool)arg1;
- (void)setIsTransferListCellTapped:(bool)arg1;
- (void)setShowSIMSetup:(bool)arg1;
- (bool)showSIMSetup;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end

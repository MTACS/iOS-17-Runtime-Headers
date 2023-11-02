
@interface TSCellularPlanIntroViewController : TSOBTableWelcomeController <TSSIMSetupDelegate, TSSetupFlowItem, UITableViewDataSource, UITableViewDelegate> {
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _isProximityTransferButtonTapped;
    bool  _isScanButtonTapped;
    OBLinkTrayButton * _laterButton;
    bool  _requireDelayBluetoothConnection;
    bool  _showTransferOption;
    id  _transferBackPlan;
    id  viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isProximityTransferButtonTapped;
@property bool isScanButtonTapped;
@property bool requireDelayBluetoothConnection;
@property (readonly) Class superclass;
@property (retain) id transferBackPlan;

- (void).cxx_destruct;
- (void)_laterButtonTapped;
- (void)_learnMoreButtonTapped;
- (void)_viewWillAppear;
- (id)delegate;
- (id)getCellTextAt:(id)arg1;
- (id)initWithShowTransferOption:(bool)arg1 requireDelayBluetoothConnection:(bool)arg2;
- (id)initWithTransferBackPlan:(id)arg1;
- (bool)isProximityTransferButtonTapped;
- (bool)isScanButtonTapped;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requireDelayBluetoothConnection;
- (void)setDelegate:(id)arg1;
- (void)setIsProximityTransferButtonTapped:(bool)arg1;
- (void)setIsScanButtonTapped:(bool)arg1;
- (void)setRequireDelayBluetoothConnection:(bool)arg1;
- (void)setTransferBackPlan:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)transferBackPlan;
- (bool)userInteractionEnabled;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

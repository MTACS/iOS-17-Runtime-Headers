
@interface SSCellularPlanCarrierAppsViewController : TSOBTableWelcomeController <ASCLockupViewDelegate, TSSIMSetupDelegate, TSSetupFlowItem, UITableViewDataSource, UITableViewDelegate> {
    id  _carrierApps;
    <TSSIMSetupFlowDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_userDidTapCancel;
- (id)delegate;
- (id)initWithCarrierApps:(id)arg1 country:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)userInteractionEnabled;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

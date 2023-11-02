
@interface AAUIInheritanceShareAccessKeyOptionsViewController : AAUIOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    <AAUIInheritanceSetupFlowDelegate> * _flowDelegate;
    NSArray * _options;
    AAUIOBInheritanceShareAccessKeyOptionsViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <AAUIInheritanceSetupFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_configurationForShareType:(unsigned long long)arg1;
- (void)_setupTableView;
- (id)flowDelegate;
- (id)initWithBeneficiaryName:(id)arg1 handle:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFlowDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

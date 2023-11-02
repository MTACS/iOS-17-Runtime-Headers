
@interface TSCellularPlanUsesViewController : TSOBTableWelcomeController <TSSetupFlowItem, UITableViewDataSource, UITableViewDelegate> {
    NSIndexPath * _chosenUseIndexPath;
    NSMutableArray * _chosenUseIndexPaths;
    bool  _dataSwitchEnabled;
    <TSSIMSetupFlowDelegate> * _delegate;
    OBBoldTrayButton * _doneButton;
    bool  _hasDoneButton;
    NSLayoutConstraint * _heightAnchor;
    NSLayoutConstraint * _heightConstraint;
    bool  _inPrivateNetworkMode;
    NSArray * _planItemBadges;
    NSArray * _selectedPlanItems;
    unsigned long long  _usesType;
}

@property (retain) NSIndexPath *chosenUseIndexPath;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool hasDoneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (retain) NSArray *planItemBadges;
@property (retain) NSArray *selectedPlanItems;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long usesType;

+ (id)sGetSelectedPlanItems;
+ (bool)sInPrivateNetworkMode:(id)arg1;
+ (bool)sInPrivateNetworkModeForItem:(id)arg1;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (bool)_needToLaunch;
- (id)chosenUseIndexPath;
- (id)chosenUseIndexPaths;
- (void)dataSwitchChanged:(id)arg1;
- (id)delegate;
- (bool)hasDoneButton;
- (id)heightAnchor;
- (id)initWithType:(unsigned long long)arg1 withDoneButton:(bool)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)planItemBadges;
- (void)prepare:(id /* block */)arg1;
- (void)saveDefaultUse:(id /* block */)arg1;
- (id)selectedPlanItems;
- (void)setChosenUseIndexPath:(id)arg1;
- (void)setChosenUseIndexPaths:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasDoneButton:(bool)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setPlanItemBadges:(id)arg1;
- (void)setSelectedPlanItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)usesType;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

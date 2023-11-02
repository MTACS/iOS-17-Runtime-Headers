
@interface TSCellularPlanLabelsViewController : TSOBTableWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowDismiss;
    <TSSIMSetupFlowDelegate> * _delegate;
    OBBoldTrayButton * _doneButton;
    bool  _forceDualSIMSetup;
    NSLayoutConstraint * _heightAnchor;
    NSString * _iccid;
    TSCellularPlanLabelPickerTableViewController * _labelPickerViewController;
    NSArray * _planItemBadges;
    bool  _requireSetup;
    bool  _showDupLabelsFooter;
    NSMutableArray * _sortedPlanItemsWithPendingLabels;
}

@property bool allowDismiss;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool forceDualSIMSetup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (readonly) NSString *iccid;
@property (retain) TSCellularPlanLabelPickerTableViewController *labelPickerViewController;
@property (retain) NSArray *planItemBadges;
@property bool requireSetup;
@property bool showDupLabelsFooter;
@property (retain) NSMutableArray *sortedPlanItemsWithPendingLabels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (bool)allowDismiss;
- (bool)canBeShownFromSuspendedState;
- (id)delegate;
- (bool)forceDualSIMSetup;
- (id)getPendingLabelAtIndex:(long long)arg1;
- (id)getPlanItemByIndex:(long long)arg1;
- (id)getPredefinedUserLabels;
- (id)heightAnchor;
- (id)iccid;
- (id)initWithAllowDismiss:(bool)arg1;
- (id)initWithIccid:(id)arg1 forceDualSIMSetup:(bool)arg2 allowDismiss:(bool)arg3;
- (id)labelPickerViewController;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)planItemBadges;
- (void)prepare:(id /* block */)arg1;
- (void)prepareLabels:(id /* block */)arg1;
- (bool)requireSetup;
- (void)savePlanLabels:(id /* block */)arg1;
- (void)setAllowDismiss:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceDualSIMSetup:(bool)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setLabelPickerViewController:(id)arg1;
- (void)setPendingLabel:(id)arg1 forPlanItem:(id)arg2;
- (void)setPlanItemBadges:(id)arg1;
- (void)setRequireSetup:(bool)arg1;
- (void)setShowDupLabelsFooter:(bool)arg1;
- (void)setSortedPlanItemsWithPendingLabels:(id)arg1;
- (bool)showDupLabelsFooter;
- (id)sortedPlanItemsWithPendingLabels;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

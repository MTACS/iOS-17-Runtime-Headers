
@interface TSCellularPlanRemapViewController : TSOBTableWelcomeController <TSSetupFlowItem, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSIndexPath * _chosenTargetCellularPlanItem;
    CTDanglingPlanItem * _danglingPlanItem;
    CTCellularPlanItem * _defaultVoiceItem;
    <TSSIMSetupFlowDelegate> * _delegate;
    OBBoldTrayButton * _doneButton;
    bool  _hasBackButton;
    bool  _hasContinueButton;
    NSLayoutConstraint * _heightAnchor;
    NSArray * _selectedPlanItems;
}

@property (retain) NSIndexPath *chosenTargetCellularPlanItem;
@property (retain) CTDanglingPlanItem *danglingPlanItem;
@property (readonly, copy) NSString *debugDescription;
@property (retain) CTCellularPlanItem *defaultVoiceItem;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property bool hasBackButton;
@property bool hasContinueButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *heightAnchor;
@property (retain) NSArray *selectedPlanItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (bool)canBeShownFromSuspendedState;
- (id)chosenTargetCellularPlanItem;
- (id)danglingPlanItem;
- (id)defaultVoiceItem;
- (id)delegate;
- (bool)hasBackButton;
- (bool)hasContinueButton;
- (id)heightAnchor;
- (id)initWithBackButton:(bool)arg1 continueButton:(bool)arg2 danglingPlanItem:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepare:(id /* block */)arg1;
- (void)remapDanglingItem:(id /* block */)arg1;
- (id)selectedPlanItems;
- (void)setChosenTargetCellularPlanItem:(id)arg1;
- (void)setDanglingPlanItem:(id)arg1;
- (void)setDefaultVoiceItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasBackButton:(bool)arg1;
- (void)setHasContinueButton:(bool)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setSelectedPlanItems:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

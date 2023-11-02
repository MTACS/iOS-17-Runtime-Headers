
@interface WDUnitPreferenceViewController : HKTableViewController <HKAdaptiveModalPresented> {
    UIFont * _bodyFont;
    UIBarButtonItem * _cancelButton;
    HKDisplayType * _displayType;
    UIBarButtonItem * _doneButton;
    long long  _originalSelectedRowIndex;
    bool  _requiresChangeConfirmation;
    NSArray * _rows;
    long long  _selectedRowIndex;
    HKUnitPreferenceController * _unitController;
    NSSet * _units;
}

@property (nonatomic, retain) UIFont *bodyFont;
@property (nonatomic) bool requiresChangeConfirmation;

- (void).cxx_destruct;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_sortedUnitPreferenceRows;
- (void)_updateCurrentUnit:(id)arg1;
- (id)bodyFont;
- (id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requiresChangeConfirmation;
- (void)setBodyFont:(id)arg1;
- (void)setRequiresChangeConfirmation:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

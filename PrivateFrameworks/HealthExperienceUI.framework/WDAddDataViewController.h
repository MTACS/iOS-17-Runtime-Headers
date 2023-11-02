
@interface WDAddDataViewController : HKTableViewController <UIAdaptivePresentationControllerDelegate> {
    HKDateCache * _dateCache;
    HKDisplayType * _displayType;
    HKHealthStore * _healthStore;
    NSDate * _initialStartDate;
    WDAddDataManualEntryTableData * _model;
    HKUnitPreferenceController * _unitController;
    HKManualEntryValidationController * _validationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *initialStartDate;
@property (nonatomic) bool savingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataValidated;
- (void)_showValidationConfirmAlertWithErrorString:(id)arg1;
- (void)_showValidationErrorAlertWithErrorString:(id)arg1;
- (void)addButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)defaultEditingItem;
- (id)defaultMetadata;
- (id)generateHKObjects;
- (id)initWithDisplayType:(id)arg1 healthStore:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4 dateCache:(id)arg5;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initialStartDate;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadContent;
- (void)reloadManualEntryItems;
- (void)reloadManualEntryItemsAndReloadTableView:(bool)arg1;
- (void)saveHKObjectWithCompletion:(id /* block */)arg1;
- (bool)savingEnabled;
- (void)setInitialStartDate:(id)arg1;
- (void)setSavingEnabled:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updatePreferredContentSize;
- (void)validateDataWithCompletion:(id /* block */)arg1;
- (void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end

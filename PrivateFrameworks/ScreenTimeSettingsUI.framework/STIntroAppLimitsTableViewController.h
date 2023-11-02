
@interface STIntroAppLimitsTableViewController : UITableViewController {
    STAllowance * _allowance;
    bool  _showingAllCategories;
    bool  _showingDatePicker;
    NSDateComponentsFormatter * _timeAmountFormatter;
}

@property (readonly) STAllowance *allowance;
@property bool showingAllCategories;
@property bool showingDatePicker;
@property (readonly) NSDateComponentsFormatter *timeAmountFormatter;

- (void).cxx_destruct;
- (void)_datePickerChanged:(id)arg1;
- (id)_selectedCategories;
- (void)_stIntroAppLimitsTableViewControllerCommonInit;
- (id)allowance;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowingAllCategories:(bool)arg1;
- (void)setShowingDatePicker:(bool)arg1;
- (bool)showingAllCategories;
- (bool)showingDatePicker;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)timeAmountFormatter;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

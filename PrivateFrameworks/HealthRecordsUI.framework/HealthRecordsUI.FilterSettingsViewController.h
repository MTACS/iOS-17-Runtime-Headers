
@interface HealthRecordsUI.FilterSettingsViewController : HKTableViewController {
    void accounts;
    void categories;
    void defaultCellIdentifier;
    void defaultHeaderIdentifier;
    void defaultSectionContentInset;
    void defaultSectionCornerRadius;
    void delegate;
    void selectedAccounts;
    void selectedCategories;
}

- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1 selectedCategories:(id)arg2 selectedAccounts:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithUsingInsetStyling:(bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

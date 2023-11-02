
@interface DMCProfileDetailsViewController : DMCProfileTableViewController {
    int  _mode;
    DMCProfileViewModel * _profileViewModel;
    NSArray * _sections;
    bool  _shouldShowWarningText;
    bool  _showTitleIfOnlyOneSection;
    NSString * _tableTitle;
    double  _tableViewBottomInset;
    bool  _viewControllerCanPop;
}

@property (nonatomic) int mode;
@property (nonatomic, retain) DMCProfileViewModel *profileViewModel;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) bool shouldShowWarningText;
@property (nonatomic) bool showTitleIfOnlyOneSection;
@property (nonatomic, copy) NSString *tableTitle;
@property (nonatomic) double tableViewBottomInset;
@property (nonatomic) bool viewControllerCanPop;

- (void).cxx_destruct;
- (void)_doneButtonTapped:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)_reloadTable:(id)arg1;
- (void)_setup;
- (void)_updateStateForCurrentMode;
- (void)dealloc;
- (id)initWithProfileViewModel:(id)arg1;
- (id)initWithProfileViewModel:(id)arg1 mode:(int)arg2;
- (int)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profileViewModel;
- (void)reloadSectionArray;
- (id)sections;
- (void)setMode:(int)arg1;
- (void)setProfileDetailsMode:(int)arg1;
- (void)setProfileViewModel:(id)arg1;
- (void)setProfileViewModel:(id)arg1 mode:(int)arg2;
- (void)setSections:(id)arg1;
- (void)setShouldShowWarningText:(bool)arg1;
- (void)setShowTitleIfOnlyOneSection:(bool)arg1;
- (void)setTableTitle:(id)arg1;
- (void)setTableViewBottomInset:(double)arg1;
- (void)setViewControllerCanPop:(bool)arg1;
- (bool)shouldShowWarningText;
- (bool)showTitleIfOnlyOneSection;
- (id)tableTitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableViewBottomInset;
- (bool)viewControllerCanPop;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

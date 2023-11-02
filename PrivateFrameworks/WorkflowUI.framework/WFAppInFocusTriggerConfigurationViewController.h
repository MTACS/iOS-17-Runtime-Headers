
@interface WFAppInFocusTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAppSearchViewControllerDelegate, WFTriggerMultiSelectCellDelegate> {
    NSMutableArray * _displayNameOfSelectedApps;
    NSMutableOrderedSet * _selectedApps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *displayNameOfSelectedApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *selectedApps;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appSearchViewController:(id)arg1 didFinishWithApps:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;
- (void)cell:(id)arg1 didSelectOptionWithLeftViewSelected:(bool)arg2 rightViewSelected:(bool)arg3;
- (id)customSections;
- (id)displayNameOfSelectedApps;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (id)selectedApps;
- (void)setDisplayNameOfSelectedApps:(id)arg1;
- (void)setSelectedApps:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)updateDisplayNameOfSelectedApps;
- (void)viewWillAppear:(bool)arg1;

@end

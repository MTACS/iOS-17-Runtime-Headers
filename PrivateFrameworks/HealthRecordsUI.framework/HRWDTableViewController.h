
@interface HRWDTableViewController : HKTableViewController <HRWDTableViewSectionDelegate> {
    HRProfile * _profile;
    NSArray * _tableSections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) HRProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tableSections;
@property (retain) UITableView *tableView;

+ (id)tableViewSectionClasses;

- (void).cxx_destruct;
- (void)_addObservers;
- (id)_section:(long long)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)indexPathForCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)pushViewController:(id)arg1;
- (void)reloadSection:(unsigned long long)arg1 animated:(bool)arg2;
- (void)reloadTable;
- (void)sectionAddedChildViewController:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)tableSections;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

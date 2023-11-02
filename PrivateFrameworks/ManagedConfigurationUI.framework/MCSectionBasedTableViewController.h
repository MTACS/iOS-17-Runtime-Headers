
@interface MCSectionBasedTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    MCSectionBasedTableView * _sectionBasedTableView;
    NSArray * _sectionControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCSectionBasedTableView *sectionBasedTableView;
@property (nonatomic, copy) NSArray *sectionControllers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerCellClass;
- (id)defaultView;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionBasedTableView;
- (id)sectionControllers;
- (void)setSectionBasedTableView:(id)arg1;
- (void)setSectionControllers:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

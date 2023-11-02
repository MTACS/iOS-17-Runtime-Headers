
@interface STWeeklyReportViewController : UITableViewController {
    NSLayoutConstraint * _heightConstraint;
    STUsageReport * _report;
    NSArray * _tableViewCells;
}

@property (retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, readonly) STUsageReport *report;
@property (nonatomic, retain) NSArray *tableViewCells;

- (void).cxx_destruct;
- (void)_heightDidChange:(id)arg1;
- (void)dealloc;
- (id)heightConstraint;
- (id)initWithData:(id)arg1;
- (id)initWithUsageReport:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)report;
- (void)setHeightConstraint:(id)arg1;
- (void)setTableViewCells:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewCells;
- (void)viewDidLoad;

@end

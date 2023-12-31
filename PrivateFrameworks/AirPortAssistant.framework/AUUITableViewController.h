
@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {
    TableViewManager * _tableManager;
}

@property (nonatomic) <TableViewManagerDelegate> *delegate;
@property (nonatomic, readonly) TableViewManager *tableManager;
@property (nonatomic, retain) UITableView *tableView;

- (void)dealloc;
- (id)delegate;
- (void)initAUUITableViewControllerCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableManager;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

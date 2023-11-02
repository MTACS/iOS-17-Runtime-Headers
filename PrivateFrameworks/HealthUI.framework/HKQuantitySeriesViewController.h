
@interface HKQuantitySeriesViewController : UIViewController {
    HKQuantitySeriesDataProvider * _dataProvider;
    UITableView * _tableView;
}

@property (nonatomic, retain) HKQuantitySeriesDataProvider *dataProvider;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)dataProvider;
- (void)loadView;
- (void)setDataProvider:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end

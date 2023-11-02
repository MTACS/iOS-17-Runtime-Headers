
@interface WFAlarmChooserViewController : UIViewController <MTAlarmDataSourceObserver, UITableViewDataSource, UITableViewDelegate> {
    MTAlarmDataSource * _alarmDataSource;
    NSMutableOrderedSet * _checkedAlarmIDs;
    <WFAlarmChooserViewControllerDelegate> * _delegate;
    UITableView * _tableView;
}

@property (nonatomic, readonly) MTAlarmDataSource *alarmDataSource;
@property (nonatomic, readonly) NSMutableOrderedSet *checkedAlarmIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAlarmChooserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (id)alarmDataSource;
- (void)cancel:(id)arg1;
- (void)checkForValidCheckedAlarmIDs;
- (id)checkedAlarmIDs;
- (void)dataSourceDidReload:(id)arg1;
- (id)delegate;
- (void)finish:(id)arg1;
- (id)initWithAlarmDataSource:(id)arg1 checkedAlarmIDs:(id)arg2;
- (bool)isModalInPresentation;
- (void)loadView;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateDoneButtonEnabled;
- (void)viewDidLoad;

@end

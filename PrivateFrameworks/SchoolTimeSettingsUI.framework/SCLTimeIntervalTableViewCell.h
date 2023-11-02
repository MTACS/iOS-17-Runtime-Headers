
@interface SCLTimeIntervalTableViewCell : PSTableCell <SCLTimePickerTableViewCellDelegate, UITableViewDelegate> {
    UITableViewDiffableDataSource * _dataSource;
    NSDateFormatter * _dateFormatter;
    bool  _reloadingAnimated;
    UITableView * _tableView;
}

@property (nonatomic, retain) UITableViewDiffableDataSource *dataSource;
@property (nonatomic, readonly) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReloadingAnimated, nonatomic) bool reloadingAnimated;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)configureTimeCell:(id)arg1 forRow:(unsigned long long)arg2;
- (void)configureTimePickerCell:(id)arg1 forRow:(unsigned long long)arg2;
- (id)constraintInterval;
- (id)dataSource;
- (id)dateConverter;
- (id)dateFormatter;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isReloadingAnimated;
- (unsigned long long)pickerState;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)reloadWithSpecifier:(id)arg1 animated:(bool)arg2;
- (id)scheduleTimeFormatter;
- (void)setDataSource:(id)arg1;
- (void)setReloadingAnimated:(bool)arg1;
- (void)setTableView:(id)arg1;
- (id)snapshotForPickerState:(unsigned long long)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)timeInterval;
- (void)timePickerCell:(id)arg1 didUpdateDate:(id)arg2;

@end

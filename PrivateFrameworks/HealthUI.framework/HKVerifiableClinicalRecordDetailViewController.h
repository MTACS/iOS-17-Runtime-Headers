
@interface HKVerifiableClinicalRecordDetailViewController : HKTableViewController {
    HKVerifiableClinicalRecordDetailDataProvider * _dataProvider;
}

@property (nonatomic, retain) HKVerifiableClinicalRecordDetailDataProvider *dataProvider;

- (void).cxx_destruct;
- (void)_setUpTableView;
- (id)configureSubtitleCellForItem:(id)arg1 tableView:(id)arg2;
- (id)configureValueCellForItem:(id)arg1 tableView:(id)arg2;
- (id)dataProvider;
- (id)initWithSignedRecord:(id)arg1 medicalRecords:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end


@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController {
    NSArray * _filePaths;
    HKHealthRecordsStore * _healthRecordsStore;
    _UIContentUnavailableView * _noDataView;
}

@property (retain) NSArray *filePaths;
@property (nonatomic, retain) HKHealthRecordsStore *healthRecordsStore;
@property (retain) _UIContentUnavailableView *noDataView;

- (void).cxx_destruct;
- (id)description;
- (void)fetchClinicalOptInDataCollectionFilePaths;
- (id)filePaths;
- (id)healthRecordsStore;
- (id)noDataView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setFilePaths:(id)arg1;
- (void)setHealthRecordsStore:(id)arg1;
- (void)setNoDataView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

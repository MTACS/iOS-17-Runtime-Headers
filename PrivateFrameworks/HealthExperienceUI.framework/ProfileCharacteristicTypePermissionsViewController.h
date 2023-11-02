
@interface ProfileCharacteristicTypePermissionsViewController : UITableViewController <HKSourceListDataSourceObserver, HKSwitchTableViewCellDelegate> {
    HKAuthorizationStore * _authorizationStore;
    NSDictionary * _characteristicAuthorizationRecordsBySource;
    HKCharacteristicType * _characteristicType;
    HKDisplayType * _displayType;
    HKDisplayTypeController * _displayTypeController;
    NSString * _firstName;
    WDDisplayTypeDescriptionTableFooterView * _footerView;
    HKHealthStore * _healthStore;
    bool  _isLoaded;
    NSArray * _orderedSectionIdentifiers;
    HKSourceListDataSource * _sourceListDataSource;
    NSDictionary * _sourceToAuthRecord;
}

@property (nonatomic, retain) HKSourceListDataSource *sourceListDataSource;
@property (nonatomic, copy) NSDictionary *sourceToAuthRecord;

+ (id)orderedSectionIdentifiersForProfile:(long long)arg1;

- (void).cxx_destruct;
- (void)_adjustFooterHeight;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1;
- (void)_gatherDataAndRefreshUI;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (long long)_profileSectionIdentifierForIndex:(long long)arg1;
- (bool)_shouldDisplayNameInFooters;
- (id)_sourceForIndexPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHealthStore:(id)arg1 characteristicType:(id)arg2 firstName:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSourceListDataSource:(id)arg1;
- (void)setSourceToAuthRecord:(id)arg1;
- (id)sourceListDataSource;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (id)sourceToAuthRecord;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

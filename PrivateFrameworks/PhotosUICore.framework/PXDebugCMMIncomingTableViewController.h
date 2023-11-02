
@interface PXDebugCMMIncomingTableViewController : UITableViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    PXCMMInvitationsDataSource * _dataSource;
    PXCMMInvitationsDataSourceManager * _dataSourceManager;
}

@property (nonatomic, retain) PXCMMInvitationsDataSource *dataSource;
@property (nonatomic, readonly) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)dataSourceManager;
- (id)initWithDataSourceManager:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

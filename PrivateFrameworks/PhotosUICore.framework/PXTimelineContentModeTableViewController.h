
@interface PXTimelineContentModeTableViewController : UITableViewController {
    unsigned long long  _contentMode;
    NSArray * _dataSource;
    unsigned long long  _widgetSizeClass;
}

@property (nonatomic, readonly) unsigned long long contentMode;
@property (nonatomic, retain) NSArray *dataSource;
@property (nonatomic, readonly) unsigned long long widgetSizeClass;

- (void).cxx_destruct;
- (id)_fetchAssetSourcesForContentMode:(unsigned long long)arg1;
- (unsigned long long)contentMode;
- (id)dataSource;
- (id)initWithContentMode:(unsigned long long)arg1 widgetSizeClass:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (unsigned long long)widgetSizeClass;

@end


@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver> {
    HKSourceListDataSource * _dataSource;
    WDProfile * _profile;
    NSArray * _uninstalledSources;
}

@property (nonatomic, retain) HKSourceListDataSource *dataSource;
@property (nonatomic, retain) WDProfile *profile;
@property (readonly) UIImage *uninistalledAppImage;
@property (nonatomic, copy) NSArray *uninstalledSources;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)profile;
- (void)setDataSource:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setUninstalledSources:(id)arg1;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)uninistalledAppImage;
- (id)uninstalledSources;
- (void)updateUninstalledSources;
- (void)viewWillAppear:(bool)arg1;

@end

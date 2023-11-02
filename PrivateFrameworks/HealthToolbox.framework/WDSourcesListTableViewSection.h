
@interface WDSourcesListTableViewSection : WDTableViewSection <HKSourceListDataSourceObserver, WDSourceTableViewSection> {
    HKSourceListDataSource * _dataSource;
    NSString * _restorationSourceBundleIdentifier;
    bool  _shouldHideHeader;
}

@property (nonatomic, retain) HKSourceListDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *restorationSourceBundleIdentifier;
@property (nonatomic) bool shouldHideHeader;
@property (readonly) Class superclass;

+ (id)detailViewControllerForSourceModel:(id)arg1 withProfile:(id)arg2;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dataSourceDidUpdate;
- (void)dealloc;
- (id)detailViewControllerForSourceModel:(id)arg1;
- (double)estimatedHeightForRow:(unsigned long long)arg1;
- (double)heightForRow:(unsigned long long)arg1;
- (id)noneCellForTableView:(id)arg1;
- (id)noneString;
- (id)restorationSourceBundleIdentifier;
- (void)setDataSource:(id)arg1;
- (void)setRestorationSourceBundleIdentifier:(id)arg1;
- (void)setShouldHideHeader:(bool)arg1;
- (void)setSourceListDataSource:(id)arg1;
- (bool)shouldHideHeader;
- (void)sourceListDataSourceDidUpdate:(id)arg1;

@end

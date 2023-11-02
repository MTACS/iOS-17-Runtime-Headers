
@interface PXInboxAggregateDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    NSArray * _dataSourceManagers;
}

@property (nonatomic, readonly) PXInboxAggregateDataSource *dataSource;
@property (nonatomic, readonly) NSArray *dataSourceManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (void)_updateDataSource;
- (id)createInitialDataSource;
- (id)dataSourceManagers;
- (id)initWithDataSourceManagers:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end


@interface PXStackedDataSourceManager : PXSectionedDataSourceManager <PXDataSectionManagerChangeObserver> {
    NSArray * _dataSectionManagers;
    bool  _initialDataSourceCreated;
}

@property (nonatomic, copy) NSArray *dataSectionManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialDataSourceCreated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newDataSource;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_updateDataSourceWithSectionChanges:(id)arg1 itemChanges:(id)arg2;
- (id)createInitialDataSource;
- (id)dataSectionManagers;
- (id)initWithDataSectionManagers:(id)arg1;
- (bool)initialDataSourceCreated;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSectionManagers:(id)arg1;
- (void)setInitialDataSourceCreated:(bool)arg1;

@end

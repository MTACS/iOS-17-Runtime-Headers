
@interface PXNavigationListDataSourceBasedDataSectionManager : PXDataSectionManager <PXCollectionsDataSourceManagerObserver, PXDataSectionManagerEnabling> {
    PXSectionedDataSource * _dataSource;
    PXSectionedDataSourceManager * _dataSourceManager;
    bool  _enabled;
    PXDataSectionEnablementForwarder * _enablementForwarder;
    bool  _hiddenWhenEmpty;
}

@property (getter=isDataSectionVisible, nonatomic, readonly) bool dataSectionVisible;
@property (nonatomic, retain) PXSectionedDataSource *dataSource;
@property (getter=isDataSourceEmpty, nonatomic, readonly) bool dataSourceEmpty;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) PXDataSectionEnablementForwarder *enablementForwarder;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenWhenEmpty, nonatomic) bool hiddenWhenEmpty;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDataSourceChange;
- (void)_updateVisibilityViaDataSectionIfNecessary;
- (bool)allowsEmptyDataSection;
- (id)createDataSection;
- (id)dataSectionFromDataSource:(id)arg1;
- (id)dataSource;
- (id)dataSourceManager;
- (id)enablementForwarder;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithDataSourceManager:(id)arg1;
- (bool)isDataSectionVisible;
- (bool)isDataSourceEmpty;
- (bool)isEnabled;
- (bool)isHiddenWhenEmpty;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSource:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablementForwarder:(id)arg1;
- (void)setHiddenWhenEmpty:(bool)arg1;

@end

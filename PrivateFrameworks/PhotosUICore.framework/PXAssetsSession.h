
@interface PXAssetsSession : PXObservable <PXSectionedDataSourceManagerObserver> {
    PXSectionedDataSource * _dataSource;
    PXSectionedDataSourceManager * _dataSourceManager;
    PXUIMediaProvider * _mediaProvider;
    PXSectionedSelectionManager * _selectionManager;
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, retain) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXUIMediaProvider *mediaProvider;
@property (nonatomic, retain) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDataSourceDependentProperties;
- (id)dataSource;
- (id)dataSourceManager;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithDataSourceManager:(id)arg1 mediaProvider:(id)arg2 selectionManager:(id)arg3;
- (id)mediaProvider;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)selectionManager;
- (id)selectionSnapshot;
- (void)setDataSource:(id)arg1;
- (void)setSelectionManager:(id)arg1;
- (void)setSelectionSnapshot:(id)arg1;

@end

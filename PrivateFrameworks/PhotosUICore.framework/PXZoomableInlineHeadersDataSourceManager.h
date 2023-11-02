
@interface PXZoomableInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver> {
    PXAssetsDataSourceManager * _assetsDataSourceManager;
    bool  _isPreparingMetadataInBackground;
    PXZoomableInlineHeaderSectionInfoMetaDataStore * _metaDataStore;
    PXZoomableInlineHeadersDataSource * _monthsDataSource;
    NSObject<OS_dispatch_queue> * _prepareQueue;
    PXAssetsDataSource * _previousAssetsDataSource;
    PXUpdater * _updater;
    PXZoomableInlineHeadersDataSource * _yearsDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXZoomableInlineHeadersDataSource *monthsDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXZoomableInlineHeadersDataSource *yearsDataSource;

+ (bool)supportsAssetsDataSourceManager:(id)arg1;

- (void).cxx_destruct;
- (void)_didFinishBackgroundPreparationWithResult:(id)arg1 forDataSource:(id)arg2;
- (id)_fetchResultForDataSource:(id)arg1;
- (void)_invalidateDataSource;
- (void)_prepareInBackgroundWithDataSource:(id)arg1;
- (id)_prepareQueue_createMetaDataStoreForAlbumWithDataSource:(id)arg1;
- (void)_prepareQueue_prepareInBackroundWithDataSource:(id)arg1;
- (void)_updateDataSource;
- (id)dataSourceForLevel:(unsigned long long)arg1;
- (void)didPerformChanges;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (id)monthsDataSource;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setNeedsUpdate;
- (id)updater;
- (id)yearsDataSource;

@end

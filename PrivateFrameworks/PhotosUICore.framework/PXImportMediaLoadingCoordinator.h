
@interface PXImportMediaLoadingCoordinator : PXObservable <PXImportAssetsDataSourceManagerObserver> {
    long long  _completedDataSourceIdentifier;
    PXImportAssetsDataSource * _dataSource;
    PXImportAssetsDataSourceManager * _dataSourceManager;
    PXImportController * _importController;
    NSObject<OS_dispatch_queue> * _modelQueue;
    bool  _paused;
    NSMutableArray * _thumbnailWorkItemUuids;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

@property (nonatomic) long long completedDataSourceIdentifier;
@property (nonatomic, retain) PXImportAssetsDataSource *dataSource;
@property (nonatomic, readonly) PXImportAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXImportController *importController;
@property (setter=setPaused:, nonatomic) bool paused;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *thumbnailWorkItemUuids;

- (void).cxx_destruct;
- (void)_processItemIfPossible;
- (long long)completedDataSourceIdentifier;
- (id)dataSource;
- (id)dataSourceManager;
- (id)dequeueNextThumbnailWorkItem;
- (void)handleNewDataSource:(id)arg1;
- (id)importController;
- (id)initWithImportController:(id)arg1;
- (void)mediaProviderThumbnailingBecameIdle:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (bool)paused;
- (void)setCompletedDataSourceIdentifier:(long long)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setThumbnailWorkItemUuids:(id)arg1;
- (void)shutdown;
- (id)thumbnailWorkItemUuids;

@end

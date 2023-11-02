
@interface MKPlaceCollectionsLogicController : NSObject <CollectionsAnalyticsProvider, MKCollectionDataProvider, MKCollectionUpdater, MKCollectionsFetcher, MKPlaceBatchConsumer> {
    MKPlaceBatchController * _batchController;
    UICollectionView * _collectionView;
    NSArray * _collections;
    long long  _context;
    UICollectionViewDiffableDataSource * _dataSource;
    NSArray * _geoCollections;
    NSDiffableDataSourceSnapshot * _snapshot;
    <MKCuratedCollectionsSyncCoordinator> * _syncCoordinator;
}

@property (nonatomic, retain) MKPlaceBatchController *batchController;
@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) NSArray *collections;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *geoCollections;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDiffableDataSourceSnapshot *snapshot;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MKCuratedCollectionsSyncCoordinator> *syncCoordinator;

- (void).cxx_destruct;
- (void)_dispatchOnManThread:(id /* block */)arg1;
- (void)appendBatchOfCollections:(id)arg1;
- (void)applySnapShot:(id)arg1 animated:(bool)arg2;
- (id)batchController;
- (id)buildCuratedCollectionsFrom:(id)arg1 shouldCancelImageDownloads:(bool)arg2;
- (void)clearPreviousModelImageDownloads;
- (void)clearSnapshotData;
- (id)collectionAtIndex:(long long)arg1;
- (id)collectionView;
- (id)collections;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)arg1 andPlaceCollections:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5;
- (id)dataSource;
- (void)didStartFetchingBatch;
- (void)dismissedCollections;
- (void)displayCollections;
- (id)geoCollectionAtIndex:(long long)arg1;
- (id)geoCollections;
- (void)getCollections:(id /* block */)arg1;
- (void)getCollectionsUsingDataSource:(id)arg1 onCompletion:(id /* block */)arg2;
- (id)identifierForCollectionAtIndex:(long long)arg1;
- (id)initWithCollectionView:(id)arg1 withPlaceCollections:(id)arg2 usingCollectionIds:(id)arg3 usingCollectionFetcher:(id)arg4 usingGuideConsumer:(id)arg5 usingSyncCoordinator:(id)arg6 inContext:(long long)arg7 usingBatchSize:(unsigned long long)arg8;
- (id)initWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3;
- (bool)isCollectionSavedAtIndex:(long long)arg1;
- (long long)numberOfCollections;
- (long long)numberOfSections;
- (void)prepareSnapshot;
- (void)refreshCollections;
- (id)removeIdentifiers:(id)arg1 collidingWithPlaceCollections:(id)arg2;
- (long long)sectionKindAtIndex:(long long)arg1;
- (void)setBatchController:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setGeoCollections:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSyncCoordinator:(id)arg1;
- (void)shouldConsumeBatch:(bool)arg1 fetchedBatch:(id)arg2;
- (id)snapshot;
- (id)syncCoordinator;
- (void)updateCollections:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingBatchSize:(unsigned long long)arg4;
- (void)updateCollectionsWithoutPreparingSnapshot:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5;
- (void)updateUsingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingBatchSize:(unsigned long long)arg3;
- (void)willDisplayCellAtIndexpath:(id)arg1;

@end

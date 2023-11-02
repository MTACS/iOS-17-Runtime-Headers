
@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXMemoryForYouDataSourceManager, PXPhotoLibraryUIChangeObserver> {
    bool  __generatingAdditionalEntries;
    PXDiscoveryFeedDataSourceManager * _discoveryDataSourceManager;
    unsigned long long  _firstUngroupedMemoryIndex;
    PHFetchResult * _memoriesFetchResult;
    bool  _memoryGenerationHasStarted;
    PHPhotoLibrary * _photoLibrary;
}

@property (getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:, nonatomic) bool _generatingAdditionalEntries;
@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXDiscoveryFeedDataSourceManager *discoveryDataSourceManager;
@property (nonatomic) unsigned long long firstUngroupedMemoryIndex;
@property (nonatomic, readonly) bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *memoriesFetchResult;
@property (nonatomic, readonly) NSDate *mostRecentCreationDate;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3;
+ (id)baseFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long*)arg4;
+ (bool)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2;

- (void).cxx_destruct;
- (void)_clearPendingNotificationForMemory:(id)arg1;
- (bool)_isGeneratingAdditionalEntries;
- (void)_setGeneratingAdditionalEntries:(bool)arg1;
- (id)createInitialDataSource;
- (id)discoveryDataSourceManager;
- (id)fetchOptions;
- (unsigned long long)firstUngroupedMemoryIndex;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (bool)hasAnyMemories;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)loadMoreContentWithCompletionHandler:(id /* block */)arg1;
- (id)memoriesFetchResult;
- (id)mostRecentCreationDate;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)photoLibrary;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)reloadMemories:(bool)arg1;
- (void)resetMemoriesFetchResult;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (void)setDiscoveryDataSourceManager:(id)arg1;
- (void)setFirstUngroupedMemoryIndex:(unsigned long long)arg1;
- (void)setMemoriesFetchResult:(id)arg1;
- (void)startGeneratingMemories;
- (void)startObservingChanges;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end

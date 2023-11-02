
@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver> {
    PXSearchActiveSearch * _activeSearch;
    PHCachingImageManager * _cachingImageManager;
    <PXSearchResultsSectionedDataSourceChangeObserver> * _delegate;
    bool  _isIndexingPaused;
    unsigned long long  _itemsRemainingCount;
    PSIDatabase * _psiSearchIndex;
    NSTimer * _searchIndexStatusTimer;
    PXSearchResultsSectionedDataSource * _searchResultsDataSource;
}

@property (nonatomic, retain) PXSearchActiveSearch *activeSearch;
@property (nonatomic, retain) PHCachingImageManager *cachingImageManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (nonatomic) <PXSearchResultsSectionedDataSourceChangeObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isIndexingPaused;
@property (nonatomic) unsigned long long itemsRemainingCount;
@property (nonatomic, retain) PSIDatabase *psiSearchIndex;
@property (nonatomic, readonly) bool resultsReady;
@property (nonatomic, retain) NSTimer *searchIndexStatusTimer;
@property (nonatomic, retain) PXSearchResultsSectionedDataSource *searchResultsDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeSearch;
- (id)cachingImageManager;
- (void)dealloc;
- (id)debugDictionary;
- (id)delegate;
- (id)initWithSearchSectionedDataSource:(id)arg1;
- (bool)isIndexingPaused;
- (unsigned long long)itemsRemainingCount;
- (void)mergePendingChanges;
- (void)prepareDataSourceWithCompletion:(id /* block */)arg1;
- (id)psiSearchIndex;
- (bool)queryHasChanged:(id)arg1 maxSuggestionCount:(long long)arg2;
- (bool)resultsReady;
- (id)searchIndexStatusTimer;
- (id)searchResultsDataSource;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 atIndexes:(id)arg3;
- (void)searchResultsDataSource:(id)arg1 didChangeThumbnailAssetsForSearchResult:(id)arg2 topAssetsSectionExists:(bool)arg3;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResult:(id)arg2 indexPath:(id)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1 shouldMergePendingChanges:(bool)arg2;
- (void)setActiveSearch:(id)arg1;
- (void)setCachingImageManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsIndexingPaused:(bool)arg1;
- (void)setItemsRemainingCount:(unsigned long long)arg1;
- (void)setPsiSearchIndex:(id)arg1;
- (void)setSearchIndexStatusTimer:(id)arg1;
- (void)setSearchResultsDataSource:(id)arg1;
- (void)startMonitoringSearchIndexStatusWithCompletion:(id /* block */)arg1;
- (void)stopMonitoringSearchIndexStatus;

@end

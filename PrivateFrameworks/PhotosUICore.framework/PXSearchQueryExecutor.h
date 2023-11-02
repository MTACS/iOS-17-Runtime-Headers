
@interface PXSearchQueryExecutor : NSObject {
    PSIQuery * _currentPSIQuery;
    PXSearchQuery * _currentSearchQuery;
    PHPhotoLibrary * _photoLibrary;
    PLSearchProcessor * _plSearchProcessor;
    NSObject<OS_dispatch_queue> * _queryQueue;
    bool  _requestSceneAncestryInformation;
    id /* block */  _resultsHandler;
    NSDictionary * _sceneAncestryInformation;
    PXSearchQueryResultsProcessor * _searchResultsProcessor;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) PSIQuery *currentPSIQuery;
@property (nonatomic, copy) PXSearchQuery *currentSearchQuery;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PLSearchProcessor *plSearchProcessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queryQueue;
@property (nonatomic, readonly) bool requestSceneAncestryInformation;
@property (nonatomic, readonly, copy) id /* block */ resultsHandler;
@property (nonatomic, copy) NSDictionary *sceneAncestryInformation;
@property (nonatomic, retain) PXSearchQueryResultsProcessor *searchResultsProcessor;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_assetSearchResultsForSpotlightSearchableItems:(id)arg1;
+ (id)_collectionSearchResultForSpotlightSearchableItem:(id)arg1;
+ (id)_collectionSearchResultsForSpotlightSearchableItems:(id)arg1;
+ (bool)_isCollectionSpotlightSearchableItem:(id)arg1;
+ (void)_searchResultsForSpotlightSearchableItems:(id)arg1 outAssetSearchResults:(out id*)arg2 outCollectionSearchResults:(out id*)arg3;
+ (bool)_sectionIsHighlightsSection:(id)arg1;

- (void).cxx_destruct;
- (id)_backendQueryFromSearchQuery:(id)arg1;
- (void)_executePhotosIndexSearchQuery:(id)arg1;
- (void)_executeSpotlightSearchQuery:(id)arg1;
- (id)_limitedSearchSuggestions:(id)arg1 limit:(unsigned long long)arg2;
- (void)_processedQueryResultsForSearchQuery:(id)arg1 psiQuery:(id)arg2 assetResults:(id)arg3 assetResultsForCompletions:(id)arg4 collectionResults:(id)arg5 topAssetsResult:(id)arg6 topCollectionResults:(id)arg7 plSearchSuggestions:(id)arg8;
- (id)_queryTokenFromSearchSuggestion:(id)arg1;
- (void)_requestSceneAncestryInformation;
- (id)_searchSuggestionsFromPSIQuery:(id)arg1 searchSections:(id)arg2 suggestionLimit:(unsigned long long)arg3;
- (void)_setupSearchResultsProcessor;
- (bool)_shouldUseScopedSearchForQuery:(id)arg1;
- (id)currentPSIQuery;
- (id)currentSearchQuery;
- (void)executeSearchQuery:(id)arg1;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 requestSceneAncestryInformation:(bool)arg2 resultsHandler:(id /* block */)arg3;
- (id)photoLibrary;
- (id)plSearchProcessor;
- (id)psiSearchIndex;
- (id)queryQueue;
- (bool)requestSceneAncestryInformation;
- (id /* block */)resultsHandler;
- (id)sceneAncestryInformation;
- (id)searchResultsProcessor;
- (void)setCurrentPSIQuery:(id)arg1;
- (void)setCurrentSearchQuery:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setSceneAncestryInformation:(id)arg1;
- (void)setSearchResultsProcessor:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

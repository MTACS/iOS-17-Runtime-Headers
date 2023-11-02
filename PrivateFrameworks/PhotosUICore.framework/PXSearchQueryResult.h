
@interface PXSearchQueryResult : NSObject {
    PHFetchResult * _curatedAssetsFetchResult;
    NSArray * _reloadItemIdentifiers;
    NSArray * _searchAssetResults;
    PXSearchQuery * _searchQuery;
    PXSearchQueryMatchInfo * _searchQueryMatchInfo;
    NSArray * _searchResults;
    NSArray * _searchSuggestions;
}

@property (nonatomic, readonly, copy) PHFetchResult *curatedAssetsFetchResult;
@property (nonatomic, readonly, copy) NSArray *reloadItemIdentifiers;
@property (nonatomic, readonly, copy) NSArray *searchAssetResults;
@property (nonatomic, readonly, copy) PXSearchQuery *searchQuery;
@property (nonatomic, readonly, copy) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (nonatomic, readonly, copy) NSArray *searchResults;
@property (nonatomic, readonly, copy) NSArray *searchSuggestions;

- (void).cxx_destruct;
- (id)curatedAssetsFetchResult;
- (id)initEmptySearchQueryResultForQuery:(id)arg1;
- (id)initWithSearchQuery:(id)arg1 searchResults:(id)arg2 searchAssetResults:(id)arg3 curatedAssetsFetchResult:(id)arg4 searchSuggestions:(id)arg5 searchQueryMatchInfo:(id)arg6 reloadItemIdentifiers:(id)arg7;
- (id)reloadItemIdentifiers;
- (id)searchAssetResults;
- (id)searchQuery;
- (id)searchQueryMatchInfo;
- (id)searchResults;
- (id)searchSuggestions;

@end

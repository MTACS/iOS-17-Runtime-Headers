
@interface PLSearchProcessor : NSObject {
    PSIDatabase * _searchIndex;
}

@property (nonatomic, readonly) PSIDatabase *searchIndex;

+ (id)_OCRProcessedGroupResultsFromGroupResults:(id)arg1 query:(id)arg2;
+ (id)_groupResultFromCombinedGroupResults:(id)arg1 query:(id)arg2;
+ (id)_singleOCRGroupResultFromOCRGroupResults:(id)arg1 query:(id)arg2;
+ (id)searchProcessorLog;

- (void).cxx_destruct;
- (id)_alphabeticalSortDescriptors;
- (bool)_categoryMaskIsCombinable:(unsigned long long)arg1;
- (id)_collectionSearchResultsFromGroupResults:(id)arg1 query:(id)arg2;
- (id)_combinedFilenameSearchResultsFromSearchResults:(id)arg1 inQuery:(id)arg2;
- (id)_completionFilenameResultsForFilenameResults:(id)arg1;
- (id)_dateSortDescriptors;
- (void)_extractSearchResultsFromGroupResults:(id)arg1 withQuery:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)_numberOfAssetsSortDescriptors;
- (double)_scoreForSearchIndexCategory:(unsigned long long)arg1;
- (id)_searchResultsByCategoryMasksForSearchResults:(id)arg1;
- (bool)_shouldOmitSectionForCategoryMask:(unsigned long long)arg1;
- (id)_sortDescriptorsForCategoryMask:(unsigned long long)arg1;
- (id)_topAssetSearchResultFromGroupResults:(id)arg1;
- (id)completionSuggestionsForQuery:(id)arg1 withSearchSections:(id)arg2 numberOfSuggestions:(unsigned long long)arg3;
- (id)initWithDatabase:(id)arg1;
- (void)performQuery:(id)arg1 disableWildcardMatchesForUserControlledCategories:(bool)arg2 withResultsHandler:(id /* block */)arg3;
- (void)performQuery:(id)arg1 withResultsHandler:(id /* block */)arg2;
- (id)performQueryForLookupIdentifier:(id)arg1 searchResultTypes:(unsigned long long)arg2 searchIndex:(id)arg3;
- (void)performQueryV2:(id)arg1 resultsHandler:(id /* block */)arg2;
- (void)performQueryV2:(id)arg1 withUserQuery:(id)arg2 resultsHandler:(id /* block */)arg3;
- (id)searchIndex;
- (id)searchResultSectionsForQuery:(id)arg1 withAssetResults:(id)arg2 assetResultsForCompletions:(id)arg3 collectionResults:(id)arg4 combineAssetSections:(bool)arg5;
- (id)updatedSearchSections:(id)arg1 withTopCollectionResults:(id)arg2;

@end

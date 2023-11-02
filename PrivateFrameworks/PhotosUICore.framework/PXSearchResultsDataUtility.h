
@interface PXSearchResultsDataUtility : NSObject

+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1 sceneAncestoryInformation:(id)arg2;
+ (id)_localizedTitleForAssetCollection:(id)arg1 titleCategory:(long long*)arg2 dateRangeFormatter:(id)arg3;
+ (id)fetchResultFromTopAssetsSearchResult:(id)arg1;
+ (id)imageForSearchUserCategory:(unsigned long long)arg1 useSearchFieldStyle:(bool)arg2;
+ (id)photosDetailsContextForPhotosUUIDs:(id)arg1 title:(id)arg2;
+ (id)photosDetailsContextFromCollectionUUID:(id)arg1 collectionClass:(Class)arg2 dateRangeFormatter:(id)arg3;
+ (id)photosDetailsContextFromMemoryUUID:(id)arg1;
+ (id)recentSearchFromActiveSearch:(id)arg1;
+ (id)searchTokenFromQueryToken:(id)arg1;
+ (id)searchTokenFromWordEmbedding:(id)arg1;
+ (id)searchTokenRepresentedObjectFromSearchText:(id)arg1;
+ (id)searchTokenRepresentedObjectsFromSearchTokens:(id)arg1;
+ (bool)sectionIsHighlightsSection:(id)arg1;
+ (id)sectionTitleFromSearchResultSection:(id)arg1 shouldCombineAssetsSections:(bool)arg2;
+ (id)sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg1;
+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 dateComponents:(id)arg4 dateIntervalFormatter:(id)arg5;
+ (id)subtitleForSearchResult:(id)arg1;
+ (void)suggestionsDisplayDataFromToken:(id)arg1 searchText:(id)arg2 matchedColor:(id)arg3 remainingColor:(id)arg4 isTextCompletion:(bool)arg5 completion:(id /* block */)arg6;
+ (id)titleForSearchResult:(id)arg1;
+ (id)wordEmbeddingSubstitutionsForSearchText:(id)arg1 wantsSubstitutedString:(bool)arg2 sceneAncestoryInformation:(id)arg3 substitutions:(id)arg4;

@end

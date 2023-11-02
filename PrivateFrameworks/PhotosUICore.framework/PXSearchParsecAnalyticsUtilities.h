
@interface PXSearchParsecAnalyticsUtilities : NSObject

+ (id)SFSearchResultFromRecentSearchText:(id)arg1 recentSearchSuggestions:(id)arg2 queryId:(long long)arg3;
+ (id)SFSearchResultFromSearchResultObject:(id)arg1 queryId:(long long)arg2;
+ (id)SFSearchResultFromSearchSuggestion:(id)arg1 queryId:(long long)arg2;
+ (id)SFSearchResultFromSearchSuggestion:(id)arg1 zeroKeyword:(id)arg2 queryId:(long long)arg3;
+ (id)SFSearchResultFromUISearchToken:(id)arg1 queryId:(long long)arg2;
+ (id)SFSearchResultFromZeroKeyword:(id)arg1 queryId:(long long)arg2;
+ (id)_baseSFSearchResultForQueryId:(long long)arg1;
+ (id)_descriptionForAssetAggregationSearchResult:(id)arg1;
+ (id)_descriptionForCollectionSearchResult:(id)arg1;
+ (id)_descriptionForSearchToken:(id)arg1;
+ (id)_descriptionForSectionType:(unsigned long long)arg1;
+ (id)_descriptionForZeroKeywordSectionType:(long long)arg1;
+ (id)_identifierForSearchResultObject:(id)arg1;
+ (id)_identifierForSearchSuggestion:(id)arg1;
+ (id)_identifierForZeroKeyword:(id)arg1;
+ (id)_resultRankingFeedbacksFromSFSearchResults:(id)arg1;
+ (id)_resultSectionForSearchSuggestions:(id)arg1 queryId:(long long)arg2;
+ (id)_resultSectionForZeroKeywordSection:(id)arg1 sectionIsVisible:(bool)arg2 queryId:(long long)arg3;
+ (id)_searchResultDescriptionForSearchResultObject:(id)arg1;
+ (id)_searchResultDescriptionForZeroKeyword:(id)arg1;
+ (id)_sectionRankingFeedbackWithResultSection:(id)arg1 localSectionPosition:(unsigned long long)arg2;
+ (id)_tokenCategoryTypesForSearchTokens:(id)arg1;
+ (id)_visibleIndexPathsForSearchResultsFromVisibleIndexPaths:(id)arg1 queryHasSuggestions:(bool)arg2;
+ (unsigned long long)_wordCountForSearchString:(id)arg1;
+ (id)commandFeedbackFromSFSearchResult:(id)arg1;
+ (id)descriptionForSearchString:(id)arg1 searchTokens:(id)arg2;
+ (id)resultSectionForSearchSection:(id)arg1 sectionIsVisible:(bool)arg2 queryId:(long long)arg3;
+ (id)sectionRankingFeedbackWithSearchSuggestions:(id)arg1 searchResultSections:(id)arg2 visibleIndexPaths:(id)arg3 queryId:(long long)arg4;
+ (id)sectionRankingFeedbackWithSearchZeroKeywordSections:(id)arg1 visibleIndexPaths:(id)arg2 queryId:(long long)arg3;
+ (id)visibleSFSearchResultsFromSearchSuggestions:(id)arg1 searchResultSections:(id)arg2 visibleIndexPaths:(id)arg3 queryId:(long long)arg4;
+ (id)visibleSFSearchResultsFromZeroKeywordSections:(id)arg1 visibleIndexPaths:(id)arg2 queryId:(long long)arg3;

@end

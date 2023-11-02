
@interface PLScopedSearchSuggestionGeneration : NSObject

+ (id)_rankedSuggestionsFromSuggestions:(id)arg1 queryAssetCount:(unsigned long long)arg2 queryCollectionCount:(unsigned long long)arg3;
+ (double)_scoreForSuggestion:(id)arg1 queryAssetCount:(unsigned long long)arg2 queryCollectionCount:(unsigned long long)arg3;
+ (double)_suggestionScoreForIndexCategory:(unsigned long long)arg1;
+ (id)_suggestionsOrderedUserCategories;
+ (id)generateCompletionSuggestionsFromGroups:(id)arg1 queryMatchedScopedAssetIds:(struct __CFArray { }*)arg2 queryMatchedScopedCollectionIds:(struct __CFArray { }*)arg3 searchResultTypes:(unsigned long long)arg4 normalizedSearchText:(id)arg5 delegate:(id)arg6;
+ (id)generateNextTermSuggestionsForQueryMatchedScopedAssetIds:(struct __CFArray { }*)arg1 queryMatchedScopedCollectionIds:(struct __CFArray { }*)arg2 searchResultTypes:(unsigned long long)arg3 delegate:(id)arg4;
+ (id)rankedSuggestionsFromSuggestionCandidates:(id)arg1 suggestionType:(unsigned long long)arg2 queryAssetCount:(unsigned long long)arg3 queryCollectionCount:(unsigned long long)arg4 suggestionLimit:(unsigned long long)arg5;

@end


@interface PXSearchTokenSuggestionModelTranslator : NSObject

+ (id)_attributedTitleForTokenTitle:(id)arg1 searchText:(id)arg2;
+ (id)_attributedTitleForWordEmbeddingMatchedText:(id)arg1 replacementText:(id)arg2 searchText:(id)arg3;
+ (id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2;
+ (bool)_isRTL;
+ (unsigned long long)_searchTokenCategoryFromCSSuggestionTokenKind:(long long)arg1;
+ (unsigned long long)_searchUserCategoryFromCSSuggestionTokenKind:(long long)arg1;
+ (id)_sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg1;
+ (id)searchTokenSuggestionsFromCompletions:(id)arg1 searchText:(id)arg2;
+ (id)searchTokenSuggestionsFromNextTokenSuggestions:(id)arg1;
+ (id)searchTokenSuggestionsFromWordEmbeddings:(id)arg1 sceneAncestryInformation:(id)arg2 searchText:(id)arg3;
+ (id)searchTokensFromCSSuggestionTokens:(id)arg1;
+ (id)searchTokensFromCSSuggestions:(id)arg1;

- (id)init;

@end

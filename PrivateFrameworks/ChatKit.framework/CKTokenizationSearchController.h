
@interface CKTokenizationSearchController : CKConversationSearchController {
    NSArray * _searchTokens;
}

@property (nonatomic, retain) NSArray *searchTokens;

+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (bool)isVisibleInCollectionView;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)supportedCellClasses;
+ (bool)supportsMenuInteraction;

- (void).cxx_destruct;
- (bool)_hasCategoryTokenStaged;
- (void)_prependTokenClarificationOptionsToResults:(id)arg1;
- (id)_tokenAddressesForSearchableItem:(id)arg1 inConversation:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)appropriateCategoryTokensForSearchText:(id)arg1;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)customLayoutSectionForEnvironment:(id)arg1;
- (void)discardSuggestionResults;
- (double)interGroupSpacing;
- (bool)isTokenizationSearchController;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (unsigned long long)searchTokenContentType;
- (id)searchTokens;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)setSearchTokens:(id)arg1;
- (bool)shouldShowConversationTokenSuggestionForConversationGUID:(id)arg1;
- (bool)shouldShowFilterTokenSuggestion:(id)arg1;
- (id)tokenizedQueryResultsForItems:(id)arg1;
- (bool)wantsHeaderSection;

@end

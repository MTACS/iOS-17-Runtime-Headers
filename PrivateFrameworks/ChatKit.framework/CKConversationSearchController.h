
@interface CKConversationSearchController : CKSearchController <CKConversationSearchResultCellDelegate> {
    NSArray * _currentZKWSuggestions;
    bool  _gotResults;
    NSSet * _intermediaryResults;
    bool  _searchTerminated;
    _PSSuggester * _zkwSuggester;
}

@property (nonatomic, retain) NSArray *currentZKWSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool gotResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *intermediaryResults;
@property (nonatomic) bool searchTerminated;
@property (readonly) Class superclass;
@property (nonatomic, retain) _PSSuggester *zkwSuggester;

+ (bool)_shouldUseAvatarCellsForMode:(unsigned long long)arg1;
+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)supportedCellClasses;
+ (bool)supportsMenuInteraction;
+ (bool)supportsQuicklookForResult:(id)arg1;
+ (bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2;
- (void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2;
- (id)_sortedAndRankedItemsWithItems:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)currentZKWSuggestions;
- (id)customLayoutSectionForEnvironment:(id)arg1;
- (void)didSelectResult:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (bool)gotResults;
- (double)interGroupSpacing;
- (id)intermediaryResults;
- (bool)isTokenizationSearchController;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)navigationBarTitleSummaryForSearchText:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (void)searchEnded;
- (void)searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2;
- (bool)searchTerminated;
- (unsigned long long)searchTokenContentType;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)setCurrentZKWSuggestions:(id)arg1;
- (void)setGotResults:(bool)arg1;
- (void)setIntermediaryResults:(id)arg1;
- (void)setSearchTerminated:(bool)arg1;
- (void)setZkwSuggester:(id)arg1;
- (id)tokenizedQueryResultsForItems:(id)arg1;
- (bool)wantsHeaderSection;
- (double)widthForDeterminingAvatarVisibility;
- (id)zkwSuggester;

@end

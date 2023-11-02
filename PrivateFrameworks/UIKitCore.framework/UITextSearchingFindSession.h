
@interface UITextSearchingFindSession : UIFindSession {
    _UITextSearchingFindSessionAggregator * _aggregator;
    bool  _awaitingFirstResults;
    NSMutableArray * _blocksAwaitingSearchResults;
    <NSObject><NSCopying> * _highlightedDocument;
    <NSObject><NSCopying> * _highlightedDocumentBeforeSubsequentSearch;
    UITextRange * _highlightedRangeBeforeSubsequentSearch;
    UITextRange * _highlightedTextRange;
    bool  _isSearching;
    UITextSearchOptions * _lastSearchOptions;
    NSString * _lastSearchQuery;
    UIFindInteraction * _parentInteraction;
    bool  _readyToPerformDelayedSearchOperations;
    <UITextSearching> * _searchableObject;
    struct { 
        unsigned int supportsTextReplacement : 1; 
        unsigned int shouldReplaceFoundTextInRange : 1; 
        unsigned int replaceFoundTextInRange : 1; 
        unsigned int replaceAllOccurrencesOfQueryString : 1; 
        unsigned int willHighlightFoundTextRange : 1; 
        unsigned int scrollRangeToVisible : 1; 
        unsigned int shouldBeginTextSearchOperation : 1; 
        unsigned int didBeginTextSearchOperation : 1; 
        unsigned int didEndTextSearchOperation : 1; 
        unsigned int searchResultDisplayStyle : 1; 
        unsigned int selectedTextSearchDocument : 1; 
        unsigned int compareOrderFromDocument : 1; 
        unsigned int compareFoundRangeToRange : 1; 
    }  _searchableObjectConformsTo;
    NSMutableOrderedSet * _sortedDocumentIdentifiers;
    NSMutableDictionary * _sortedResultsByDocument;
    <UITextSearching> * _stronglyHeldSearchableObject;
}

@property (nonatomic) <UITextSearching> *searchableObject;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (nonatomic, retain) <UITextSearching> *stronglyHeldSearchableObject;

- (void).cxx_destruct;
- (id)_allFoundRanges;
- (id /* block */)_documentComparator;
- (void)_finishedSearching;
- (void)_foundRange:(id)arg1 forSearchString:(id)arg2 inDocument:(id)arg3;
- (bool)_hasResults;
- (void)_invalidateAllFoundRanges;
- (void)_invalidateFoundRange:(id)arg1 inDocument:(id)arg2;
- (bool)_isCurrentSearchQueryValid;
- (id)_nearestRangeToSelectedRangeInDocument:(id)arg1;
- (id)_nextItemInOrderedSet:(id)arg1 usingComparator:(id /* block */)arg2 fromItem:(id)arg3 inDirection:(long long)arg4 loopAround:(bool)arg5;
- (void)_nextResultRelativeToRange:(out id*)arg1 document:(out id*)arg2 inDirection:(long long)arg3;
- (void)_performBlockWhenSearchResultsAreAvailable:(id /* block */)arg1;
- (void)_performDelayedSearchOperations;
- (void)_readilyHighlightNearestRangeToSelectedRangeIfNecessary;
- (void)_readilyHighlightNextResultInDirection:(long long)arg1;
- (void)_replaceHighlightedTextRangeWithReplacementString:(id)arg1;
- (void)_setHighlightedRange:(id)arg1 inDocument:(id)arg2;
- (void)_setNeedsResultCountUpdate;
- (void)_setReadyToPerformDelayedSearchOperations;
- (id /* block */)_textRangeComparatorForDocument:(id)arg1;
- (void)_updateResultCountLabel;
- (void)_updateSearchableObjectProtocolConformance;
- (bool)allowsReplacementForCurrentlyHighlightedResult;
- (void)highlightNearestFoundRangeToSelectedRangeIfNecessary;
- (void)highlightNextResultInDirection:(long long)arg1;
- (long long)highlightedResultIndex;
- (id)initWithSearchableObject:(id)arg1;
- (id)initWithStronglyHeldSearchableObject:(id)arg1;
- (void)invalidateFoundResults;
- (bool)isSearching;
- (id)parentInteraction;
- (void)performSearchWithQuery:(id)arg1 options:(id)arg2;
- (void)performSingleReplacementWithSearchQuery:(id)arg1 replacementString:(id)arg2 options:(id)arg3;
- (void)replaceAllInstancesOfSearchQuery:(id)arg1 withReplacementString:(id)arg2 options:(id)arg3;
- (void)reset;
- (long long)resultCount;
- (id)searchableObject;
- (void)setParentInteraction:(id)arg1;
- (void)setSearchableObject:(id)arg1;
- (void)setStronglyHeldSearchableObject:(id)arg1;
- (id)stronglyHeldSearchableObject;
- (bool)supportsReplacement;

@end

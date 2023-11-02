
@interface ICAuthorHighlightsUpdater : NSObject {
    void $__lazy_storage_$_grouper;
    void animatesScheduledUpdate;
    void authorHighlightsController;
    void collaboratorStatuses;
    void filter;
    void focusedRange;
    void highlightedValue;
    void isUpdating;
    void searchHighlightRegexFinder;
    void showsCursorsUserPreference;
    void states;
    void textLayoutManager;
    void updateTimer;
    void updatesVisibleRangesOnly;
}

@property (nonatomic, readonly) ICAuthorHighlightsController *authorHighlightsController;
@property (nonatomic, retain) ICTTTextEditFilter *filter;
@property (nonatomic, retain) NSValue *focusedRangeValue;
@property (nonatomic, readonly) bool hasHighlights;
@property (nonatomic, readonly) NSValue *highlightedRangeValue;
@property (nonatomic) double highlightedValue;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *searchHighlightRegexFinder;
@property (nonatomic, readonly) bool showsCollaboratorStatuses;
@property (nonatomic, readonly) ICTK2TextLayoutManager *textLayoutManager;
@property (nonatomic) bool updatesVisibleRangesOnly;

- (void).cxx_destruct;
- (id)authorHighlightsController;
- (void)dealloc;
- (id)filter;
- (void)flashHighlightsForFilter:(id)arg1;
- (void)flashHighlightsForRanges:(id)arg1 inTextStorage:(id)arg2;
- (id)focusedRangeValue;
- (bool)hasHighlights;
- (id)highlightedRangeValue;
- (double)highlightedValue;
- (id)init;
- (id)initWithAuthorHighlightsController:(id)arg1 textLayoutManager:(id)arg2;
- (void)noteShowsCollaboratorCursorsDidChange:(id)arg1;
- (void)scheduleUpdateAnimated:(bool)arg1;
- (id)searchHighlightRegexFinder;
- (void)setFilter:(id)arg1;
- (void)setFocusedRangeValue:(id)arg1;
- (void)setHighlightedValue:(double)arg1;
- (void)setSearchHighlightRegexFinder:(id)arg1;
- (void)setUpdatesVisibleRangesOnly:(bool)arg1;
- (bool)showsCollaboratorStatuses;
- (id)textLayoutManager;
- (void)updateAnimated:(bool)arg1;
- (bool)updatesVisibleRangesOnly;

@end

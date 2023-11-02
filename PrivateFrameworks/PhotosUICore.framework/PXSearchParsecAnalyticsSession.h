
@interface PXSearchParsecAnalyticsSession : NSObject {
    long long  _currentQueryId;
    SFStartLocalSearchFeedback * _currentStartSearchFeedback;
    SFStartLocalSearchFeedback * _currentStartZeroKeywordLoadFeedback;
    NSObject<OS_dispatch_queue> * _reportingQueue;
    PARSession * _session;
}

@property (nonatomic) long long currentQueryId;
@property (nonatomic, retain) SFStartLocalSearchFeedback *currentStartSearchFeedback;
@property (nonatomic, retain) SFStartLocalSearchFeedback *currentStartZeroKeywordLoadFeedback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reportingQueue;
@property (nonatomic, readonly) PARSession *session;

+ (id)sharedSession;

- (void).cxx_destruct;
- (void)_reportFeedback:(id)arg1;
- (void)_reportPhotosAppLaunchedOrEnteredForegroundEventWithFeedback:(id)arg1;
- (long long)currentQueryId;
- (id)currentStartSearchFeedback;
- (id)currentStartZeroKeywordLoadFeedback;
- (id)init;
- (void)reportPhotosAppEnteredBackground;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithPreviousSearchText:(id)arg1 previousSearchTokens:(id)arg2;
- (void)reportPhotosAppLaunchedOrEnteredForegroundWithSpotlightSearchActivity;
- (void)reportPhotosAppQuit;
- (void)reportRecentSearchSelectedWithSearchText:(id)arg1 searchTokens:(id)arg2;
- (void)reportSearchFieldCancelButtonSelected;
- (void)reportSearchFieldContentChanged:(id)arg1 searchTokens:(id)arg2;
- (void)reportSearchFieldContentCleared;
- (void)reportSearchQueryExecutionCompleted;
- (void)reportSearchResultSelected:(id)arg1;
- (void)reportSearchSuggestionSelected:(id)arg1;
- (void)reportSearchSuggestions:(id)arg1 searchResultSections:(id)arg2 visibleIndexPaths:(id)arg3 reportVisibleResultChangesOnly:(bool)arg4;
- (void)reportSearchTabDeselected;
- (void)reportSearchTabSelected;
- (void)reportShowMoreResultsSelected:(bool)arg1 searchResultsSection:(id)arg2;
- (void)reportZeroKeywordLoadBegan;
- (void)reportZeroKeywordLoadFinished;
- (void)reportZeroKeywordSections:(id)arg1 visibleIndexPaths:(id)arg2 reportVisibleResultChangesOnly:(bool)arg3;
- (void)reportZeroKeywordSelected:(id)arg1 searchToken:(id)arg2;
- (id)reportingQueue;
- (id)session;
- (void)setCurrentQueryId:(long long)arg1;
- (void)setCurrentStartSearchFeedback:(id)arg1;
- (void)setCurrentStartZeroKeywordLoadFeedback:(id)arg1;
- (void)setReportingQueue:(id)arg1;

@end


@interface UniversalSearchCompletionProvider : CompletionProvider <WBSParsecSearchSessionDelegate> {
    WBSCompletionQuery * _currentQuery;
    NSString * _currentQueryString;
    bool  _enabledByBag;
    FrequentlyVisitedSitesController * _frequentlyVisitedSitesController;
    NSString * _keyboardInputMode;
    NSNumber * _minRenderTimeout;
    NSNumber * _otherRenderTimeout;
    UniversalSearchSession * _parsecSearchSession;
    NSString * _queryString;
    NSNumber * _searchRenderTimeout;
    NSTimer * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FrequentlyVisitedSitesController *frequentlyVisitedSitesController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *minRenderTimeout;
@property (nonatomic, readonly) NSNumber *otherRenderTimeout;
@property (nonatomic, retain) UniversalSearchSession *parsecSearchSession;
@property (nonatomic, retain) NSNumber *searchRenderTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_parsecBagDidLoad:(id)arg1;
- (void)_updateInputMode:(id)arg1;
- (void)_updateStateFromBag:(id)arg1;
- (id)completionsForQuery:(id)arg1;
- (id)currentInputTypeForSession:(id)arg1;
- (void)currentKeyboardIdentifierWithLayoutsForSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)frequentlyVisitedSitesController;
- (id)initWithFrequentlyVisitedSitesController:(id)arg1;
- (unsigned long long)maximumCachedCompletionCount;
- (id)minRenderTimeout;
- (id)otherRenderTimeout;
- (id)parsecSearchSession;
- (id)searchRenderTimeout;
- (void)session:(id)arg1 didReceiveResults:(id)arg2 forQuery:(id)arg3;
- (void)setParsecSearchSession:(id)arg1;
- (void)setQueryToComplete:(id)arg1;
- (void)setSearchRenderTimeout:(id)arg1;
- (bool)shouldHideParsecResult:(id)arg1 basedOnHideRankGivenTopHit:(id)arg2 indexOfTopHitInFrequentlyVisitedSites:(unsigned long long*)arg3;

@end

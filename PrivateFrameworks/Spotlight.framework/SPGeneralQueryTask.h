
@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate> {
    bool  _didReceiveCompleteCallback;
    NSString * _mutableSessionEntityString;
    bool  _newQuery;
    SPClientSession * _session;
    NSArray * _showMoreInAppInfo;
    bool  _staleResultsFired;
    NSObject<OS_dispatch_source> * _staleResultsTimer;
    bool  _started;
    NSArray * _supportedAppScopes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didReceiveCompleteCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *mutableSessionEntityString;
@property bool newQuery;
@property SPClientSession *session;
@property (nonatomic, retain) NSArray *showMoreInAppInfo;
@property bool started;
@property (readonly) Class superclass;
@property (retain) NSArray *supportedAppScopes;

+ (id)contactEntityFromQueryContext:(id)arg1;

- (void).cxx_destruct;
- (void)addSections:(id)arg1 delayedTopHit:(bool)arg2;
- (void)cancel;
- (void)clear;
- (bool)didReceiveCompleteCallback;
- (id)displayedText;
- (void)handleOptionsForNewSections:(id)arg1;
- (id)initForSession:(id)arg1 withQuery:(id)arg2;
- (void)mergeRelatedContentFromSections:(id)arg1 bundlesToMerge:(id)arg2 mergedSectionId:(id)arg3;
- (void)mergeSections;
- (id)mutableSessionEntityString;
- (bool)newQuery;
- (void)processAppResults:(id)arg1 maxAppResults:(unsigned long long)arg2 section:(id)arg3 topHitsIndex:(unsigned long long*)arg4;
- (bool)readyToUpdate;
- (void)relatedContentSectionMerging:(id)arg1;
- (id)retainAndMergeSections:(id)arg1 forState:(unsigned long long)arg2;
- (void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
- (void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(bool)arg3 partiallyComplete:(bool)arg4 priorityFastPath:(bool)arg5 update:(bool)arg6 complete:(bool)arg7 delayedTopHit:(bool)arg8 unchanged:(bool)arg9 forceStable:(bool)arg10 blendingDuration:(double)arg11 geoEntityString:(id)arg12 supportedAppScopes:(id)arg13 showMoreInAppInfo:(id)arg14;
- (void)searchDaemonRankingLog:(id)arg1;
- (id)searchString;
- (id)session;
- (void)setDidReceiveCompleteCallback:(bool)arg1;
- (void)setMutableSessionEntityString:(id)arg1;
- (void)setNewQuery:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setShowMoreInAppInfo:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setSupportedAppScopes:(id)arg1;
- (id)showMoreInAppInfo;
- (void)start;
- (bool)started;
- (id)supportedAppScopes;
- (void)truncateSuggestionsSectionToFit:(id)arg1;
- (id)unsafeSections;
- (id)unsafeSessionEntityString;
- (void)updateResultsWithContactHeader;

@end


@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {
    NSArray * _feedbackListeners;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
    NSMapTable * _queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> * _queriesToDictionariesMappingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customFeedbackOfType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_postFeedbackOnFeedbackQueue:(id)arg1 forQueryID:(long long)arg2;
- (void)_setStartSearchFeedback:(id)arg1 forSearchOfType:(long long)arg2 withQuery:(id)arg3;
- (id)_takeStartSearchFeedbackForSearchOfType:(long long)arg1 forQuery:(id)arg2;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1 forQueryID:(long long)arg2;
- (void)didRankSections:(id)arg1 blendingDuration:(double)arg2 feedbackForHiddenAndDuplicateResults:(id)arg3 forQueryID:(long long)arg4;
- (void)didReceiveLocalResultsForQuery:(id)arg1;
- (void)didReceiveParsecResultsAfterTimeout:(id)arg1;
- (void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
- (void)flush;
- (id)initWithSession:(id)arg1;
- (void)postFeedback:(id)arg1 forQueryID:(long long)arg2;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 forQueryID:(long long)arg2 usesLoweredSearchBar:(bool)arg3;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(bool)arg2 forQueryID:(long long)arg3 usesLoweredSearchBar:(bool)arg4;
- (void)searchViewDisappearedBecauseOfEvent:(long long)arg1 forQueryID:(long long)arg2;
- (void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)arg1 forQueryID:(long long)arg2;
- (void)sendCrowdsourcedAutoFillFeedback:(id)arg1 forQueryID:(long long)arg2;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1 forQueryID:(long long)arg2;
- (void)sendNewTabFeedback:(bool)arg1;
- (void)triggeredExperimentWithTreatmentId:(id)arg1 withQueryID:(long long)arg2;
- (void)triggeredExperimentWithTreatmentId:(id)arg1 withQueryID:(long long)arg2 cfDiffered:(bool)arg3 cfUsed:(bool)arg4 cfError:(unsigned long long)arg5;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(bool)arg2 method:(long long)arg3;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(bool)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(bool)arg4;
- (void)userDidTapMicKey:(long long)arg1;
- (void)userDidTypeKey:(long long)arg1;
- (void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2 triggerEvent:(long long)arg3 forQueryID:(long long)arg4;
- (void)userTypedURLDirectlyForQuery:(id)arg1 triggerEvent:(long long)arg2;

@end

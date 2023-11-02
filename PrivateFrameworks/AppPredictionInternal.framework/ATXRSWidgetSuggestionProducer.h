
@interface ATXRSWidgetSuggestionProducer : NSObject <ATXRSRelevanceMonitorDelegate> {
    ATXWidgetSuggestionAbuseGuard * _abuseGuard;
    _PASSimpleCoalescingTimer * _coalescedRefreshRelevantShortcutsOperation;
    ATXInfoToBlendingConfidenceMapper * _confidenceMapper;
    ATXWidgetDescriptorCache * _descriptorCache;
    _ATXDuetHelper * _duetHelper;
    ATXInformationFeatureWeights * _featureWeights;
    ATXInformationFeaturizer * _featurizer;
    ATXRSFilter * _filter;
    LNMetadataProvider * _metadataProvider;
    NSObject<OS_dispatch_queue> * _queue;
    ATXInformationDescendingStartDateRanker * _ranker;
    ATXRSRelevanceMonitor * _relevanceMonitor;
    int  _relevantShortcutRefreshToken;
    ATXClientModelSuggestionReceiver * _suggestionReceiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_clientModelIdentifier;
+ (id)replacementContainerBundleIdForDonationBundleId:(id)arg1;

- (void).cxx_destruct;
- (bool)_areInfoSuggestions:(id)arg1 equalToProactiveSuggestions:(id)arg2;
- (id)_candidatesFromBundleIdToRelevantIntentsDict:(id)arg1;
- (id)_candidatesFromRelevantShortcutsFromStartDate:(id)arg1;
- (void)_coalescedRefreshRelevantShortcuts:(id)arg1;
- (id)_infoSuggestionFromCandidate:(id)arg1 suggestionIdentifier:(id)arg2;
- (id)_proactiveSuggestionsFromScoredInfoSuggestions:(id)arg1;
- (void)_pushSuggestionsToBlendingIfNecessary:(id)arg1;
- (void)_refreshRelevantShortcuts;
- (id)init;
- (id)initWithDuetHelper:(id)arg1 descriptorCache:(id)arg2 relevanceMonitor:(id)arg3 filter:(id)arg4 abuseGuard:(id)arg5 featurizer:(id)arg6 featureWeights:(id)arg7 ranker:(id)arg8 confidenceMapper:(id)arg9 suggestionReceiver:(id)arg10 metadataProvider:(id)arg11;
- (void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(id)arg1 relevantContexts:(id)arg2;

@end


@interface _PSSuggester : NSObject {
    NSDictionary * _appBundleIdToShareExtensionMapping;
    NSObject<OS_dispatch_queue> * _appExtensionQueue;
    _PSSuggesterConfiguration * _configuration;
    NSXPCConnection * _connection;
    CNContactStore * _contactStore;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
    BMSource * _feedbackSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _peopleSuggestionQueue;
    NSXPCConnection * _userConnection;
}

@property (nonatomic, readonly) _PSSuggesterConfiguration *configuration;

+ (bool)hasInitializedCache;
+ (void)initializePSSuggesterCacheWithMaxSuggestionCount:(id)arg1;
+ (void)setHasInitializedCache:(bool)arg1;
+ (id)suggesterWithDaemon;

- (void).cxx_destruct;
- (id)_dateFormatter;
- (id)_getUserDaemonXPCConnection;
- (void)_recordFeedbackToInteractionStoreWithFeedback:(id)arg1 mechanism:(long long)arg2;
- (id)appExtensionSuggestionsFromContext:(id)arg1;
- (void)asyncShareExtensionSuggestionsFromContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncShareExtensionSuggestionsFromContext:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)asyncSuggestInteractionsFromContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)asyncSuggestInteractionsFromContext:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)autocompleteSearchResultsWithPredictionContext:(id)arg1;
- (id)buildFilteringPredicateMatchingSuggestLessFeedback:(id)arg1;
- (id)candidatesForShareSheetRanking;
- (id)candidatesForShareSheetRankingCompute;
- (id)computeShareSheetEphemeralFeaturesWithPredictionContext:(id)arg1;
- (id)configuration;
- (id)contactStore;
- (void)dealloc;
- (void)deleteInteractionsMatchingSuggestLessFeedback:(id)arg1;
- (void)donateToBiome:(id)arg1;
- (id)familyRecommendationSuggestionsWithPredictionContext:(id)arg1;
- (id)getCacheSuggestionsWithPredictionContext:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 feedbackRecording:(bool)arg2;
- (id)initWithDaemonUsingConfiguration:(id)arg1;
- (bool)interactionAvailableForHandle:(id)arg1;
- (bool)interactionAvailableForHandle:(id)arg1 interactionStoreDB:(id)arg2;
- (id)interactionCountForHandle:(id)arg1 fetchLimit:(unsigned long long)arg2;
- (id)interactionCountForHandle:(id)arg1 fetchLimit:(unsigned long long)arg2 interactionStoreDB:(id)arg3;
- (bool)isTransportBundleIDSupported:(id)arg1;
- (id)photosContactInferencesSuggestionsWithPredictionContext:(id)arg1;
- (id)photosRelationshipSuggestionsWithPredictionContext:(id)arg1;
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)arg1;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;
- (void)provideFeedbackForSuggestions:(id)arg1;
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)arg1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)rankedFamilySuggestions;
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(bool)arg2;
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)arg1 maxSuggestions:(id)arg2 interactionId:(id)arg3;
- (id)rankedZKWSuggestionsFromContext:(id)arg1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1 maximumNumberOfSuggestions:(long long)arg2;
- (id)suggestInteractionsFromContext:(id)arg1;
- (id)validateCoreMLScoringModelWithRawInput:(id)arg1 predictionContext:(id)arg2;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)arg1;

@end

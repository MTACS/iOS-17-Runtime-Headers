
@interface _PSHeuristics : NSObject {
    _PSContactResolver * _contactResolver;
    _CDInteractionStore * _interactionStore;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    _CDInteractionCache * _messageInteractionCache;
    _CDInteractionCache * _recencyCache;
    NSDictionary * _recencyHeuristicLimitNumberOfProxiesByReason;
    double  _recencyMargin;
}

@property (nonatomic, readonly) _PSContactResolver *contactResolver;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, readonly) _CDInteractionCache *messageInteractionCache;
@property (nonatomic, retain) _CDInteractionCache *recencyCache;
@property (nonatomic, retain) NSDictionary *recencyHeuristicLimitNumberOfProxiesByReason;
@property (nonatomic) double recencyMargin;

+ (id)PSHeuristicsRecencyReasonToString:(long long)arg1;
+ (id)templateForPhoneCallHeuristicFromSuggestionProxy:(id)arg1;

- (void).cxx_destruct;
- (id)contactResolver;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2;
- (id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)arg1 predictionContext:(id)arg2;
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3 messageInteractionCache:(id)arg4;
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3 shareSheetSupportedBundleIds:(id)arg4 messageInteractionCache:(id)arg5;
- (id)interactionStore;
- (id)knowledgeStore;
- (id)messageInteractionCache;
- (void)prepareRecencyCacheWithSupportedBundleIds:(id)arg1;
- (id)proxiesByRecencyUsingInteractions:(id)arg1 startIndex:(unsigned long long)arg2 reason:(long long)arg3 allowNonSupportedBundleIDs:(bool)arg4;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2;
- (id)recencyCache;
- (id)recencyHeuristicLimitNumberOfProxiesByReason;
- (double)recencyMargin;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2;
- (id)returnDocumentToSender:(id)arg1;
- (id)seedSuggestionsForChatGuidsAndTransports:(id)arg1;
- (void)setRecencyCache:(id)arg1;
- (void)setRecencyHeuristicLimitNumberOfProxiesByReason:(id)arg1;
- (void)setRecencyMargin:(double)arg1;
- (void)updateModelProperties:(id)arg1;

@end

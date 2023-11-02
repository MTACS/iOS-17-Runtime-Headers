
@interface ATXInfoSuggestionServer : NSObject <ATXInfoSuggestionXPCInterface, ATXInformationHeuristicsDelegate, NSXPCListenerDelegate> {
    ATXInfoSuggestionCriterionRegistry * _criterionRegistry;
    ATXInformationEngine * _engine;
    ATXInformationHeuristics * _informationHeuristics;
    ATXRSWidgetSuggestionProducer * _relevantShortcutSuggestionProducer;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ATXInformationEngine *infoEngine;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addSuggestions:(id)arg1 forSourceIdentifier:(id)arg2 needReset:(bool)arg3 errorHandler:(id /* block */)arg4;
- (id)_processIncomingSuggestion:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3;
- (id)_processIncomingSuggestions:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3;
- (void)clearSuggestionsForInfoSourceIdentifier:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)getSuggestionsForInfoSourceIdentifier:(id)arg1 withReply:(id /* block */)arg2;
- (id)infoEngine;
- (void)informationHeuristics:(id)arg1 didUpdateSuggestions:(id)arg2 forHeuristic:(id)arg3;
- (id)init;
- (id)initWithInfoEngine:(id)arg1 rsSuggestionProducer:(id)arg2 infoHeuristics:(id)arg3 criterionRegistry:(id)arg4 xpcListener:(id)arg5;
- (void)insertSuggesions:(id)arg1 forInfoSourceIdentifier:(id)arg2 errorHandler:(id /* block */)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)overwriteSuggestionsWithProactiveSuggestions:(id)arg1 forClientModelIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)refreshInfoSuggestionsWithCompletionHandler:(id /* block */)arg1;
- (void)resetSuggestionsTo:(id)arg1 forInfoSourceIdentifier:(id)arg2 errorHandler:(id /* block */)arg3;
- (void)retrieveAvailableCriterionIdentifiersForSourceIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(bool)arg2;
- (void)timelineDidReloadForWidget:(id)arg1 parentApp:(id)arg2 withEntries:(id)arg3 completion:(id /* block */)arg4;
- (void)userDidDismissSuggestion:(id)arg1 isDismissalLongTerm:(bool)arg2 completion:(id /* block */)arg3;

@end

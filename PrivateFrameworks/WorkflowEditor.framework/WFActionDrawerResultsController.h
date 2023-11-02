
@interface WFActionDrawerResultsController : NSObject {
    WFActionRegistry * _actionRegistry;
    WFContextualActionSuggester * _actionSuggester;
    WFActionDrawerResults * _cachedSiriSuggestionsResults;
    HMHome * _home;
    NSObject<OS_dispatch_queue> * _queue;
    WFWorkflow * _workflow;
}

@property (nonatomic, readonly) WFActionRegistry *actionRegistry;
@property (nonatomic, readonly) WFContextualActionSuggester *actionSuggester;
@property (nonatomic, readonly) WFActionDrawerResults *cachedSiriSuggestionsResults;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) WFWorkflow *workflow;

+ (id)localizedAppNames;

- (void).cxx_destruct;
- (id)actionRegistry;
- (id)actionSuggester;
- (id)actions;
- (id)actionsForCategory:(id)arg1;
- (id)cachedSiriSuggestionsResults;
- (bool)filteringForResidentCompatibleActions;
- (void)getContextualSuggestionsForCurrentActions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getHomeSectionsIncludingRelatedActions:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getResultsForAllActionsWithCompletionHandler:(id /* block */)arg1;
- (void)getResultsForAllAppActionsWithCompletionHandler:(id /* block */)arg1;
- (void)getResultsForAppWithBundleIdentifier:(id)arg1 legacyIdentifier:(id)arg2 shouldFilterForAppsViewController:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)getResultsForCategory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getResultsForFavorites:(id /* block */)arg1;
- (void)getResultsForSearchQuery:(id)arg1 includingSiriSuggestedResults:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getSiriSuggestedGroupedResultsRefreshingCache:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)getSiriSuggestedResultsForBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)home;
- (id)homes;
- (id)initWithActionRegistry:(id)arg1 home:(id)arg2 workflow:(id)arg3 actionSuggester:(id)arg4;
- (id)queue;
- (id)suggestedCategoriesForContentClasses:(id)arg1;
- (id)workflow;

@end

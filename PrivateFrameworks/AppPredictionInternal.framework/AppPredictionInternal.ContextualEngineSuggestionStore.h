
@interface AppPredictionInternal.ContextualEngineSuggestionStore : NSObject <ATXSuggestionModeFilterObserver> {
    void actionToWidgetConverter;
    void allowedAmbientClientModelTypes;
    void contextStore;
    void delegate;
    void disabledHeuristicSourceIdentifiers;
    void lock;
    void modeFilter;
}

- (void).cxx_destruct;
- (void)configurationDidChangeForFilter:(id)arg1;
- (id)init;

@end

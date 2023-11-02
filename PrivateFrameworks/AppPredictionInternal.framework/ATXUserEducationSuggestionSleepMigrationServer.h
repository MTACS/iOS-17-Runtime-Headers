
@interface ATXUserEducationSuggestionSleepMigrationServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector * _connector;
    ATXHomeScreenConfigCache * _homeScreenConfigCache;
    ATXInstalledSuggestedPagesTracker * _installedSuggestedPagesTracker;
}

- (void).cxx_destruct;
- (void)_processModeChangeEvent:(id)arg1;
- (void)dealloc;
- (id)initWithConnector:(id)arg1;
- (void)processModeChangeEvent:(id)arg1;
- (void)sendSuggestion:(id)arg1 withEventType:(unsigned long long)arg2;

@end


@interface AMUIProactiveSuggestionsProvider : NSObject <ATXAmbientSuggestionProviderDelegate> {
    NSArray * _currentPredictions;
    <AMUIProactiveSuggestionsProviderDelegate> * _delegate;
    SBIconListModel * _iconListModel;
    SBHIconManager * _iconManager;
    ATXAmbientSuggestionProvider * _proactiveClient;
}

@property (nonatomic, retain) NSArray *currentPredictions;
@property (nonatomic) <AMUIProactiveSuggestionsProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)_iconDataSourceInIcon:(id)arg1 withUniqueIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 widgetKind:(id)arg4 suggestionSource:(long long)arg5;
- (id)_makeDataSourceForAtxWidget:(id)arg1;
- (id)currentPredictions;
- (id)delegate;
- (id)initWithIconListModel:(id)arg1 iconManager:(id)arg2 proactiveClient:(id)arg3;
- (void)processUpdatedPredictions:(id)arg1;
- (void)setCurrentPredictions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)suggestionForStackIdentifier:(id)arg1 amongSuggestions:(id)arg2;
- (void)suggestionProvider:(id)arg1 didUpdateStackSuggestions:(id)arg2;

@end

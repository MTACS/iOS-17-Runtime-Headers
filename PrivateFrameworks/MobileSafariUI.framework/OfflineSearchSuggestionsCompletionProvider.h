
@interface OfflineSearchSuggestionsCompletionProvider : CompletionProvider <WBSOfflineSearchSuggestionsFetcherDelegate> {
    bool  _forPrivateBrowsing;
    WBSOfflineSearchSuggestionsFetcher * _offlineSearchSuggestionsFetcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=areOfflineSearchSuggestionsAvailable, nonatomic, readonly) bool offlineSearchSuggestionsAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)areOfflineSearchSuggestionsAvailable;
- (id)initWithMaximumNumberOfSuggestions:(unsigned long long)arg1 forPrivateBrowsing:(bool)arg2;
- (void)offlineSearchSuggestionsFetcher:(id)arg1 didFindSuggestions:(id)arg2 forQuery:(id)arg3;
- (void)setQueryToComplete:(id)arg1;
- (void)updateOfflineSearchSuggestionAvailability;

@end

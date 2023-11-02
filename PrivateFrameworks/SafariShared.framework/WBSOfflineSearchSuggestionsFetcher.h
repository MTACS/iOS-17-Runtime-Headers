
@interface WBSOfflineSearchSuggestionsFetcher : NSObject {
    <WBSOfflineSearchSuggestionsFetcherDelegate> * _delegate;
    unsigned long long  _offlineSuggestionsStatus;
}

@property (nonatomic) <WBSOfflineSearchSuggestionsFetcherDelegate> *delegate;
@property (getter=areOfflineSearchSuggestionsAvailable, nonatomic, readonly) bool offlineSuggestionsAvailable;

- (void).cxx_destruct;
- (void)_checkForRemoteDisablement:(id /* block */)arg1;
- (void)_logOfflineSuggestionStatus;
- (id)_searchHelperProxy;
- (bool)areOfflineSearchSuggestionsAvailable;
- (void)dealloc;
- (id)delegate;
- (id)initWithMaximumSuggestionsToFetch:(unsigned long long)arg1;
- (void)setCurrentQuery:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateAvailability;

@end

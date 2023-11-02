
@interface WBSSearchSuggestionsFetcher : NSObject {
    bool  _hasConnectionToSearchHelper;
    unsigned long long  _numberOfPendingFetches;
    WBSOpenSearchURLTemplate * _suggestionsURLTemplate;
}

@property (getter=isFetching, nonatomic, readonly) bool fetching;
@property (nonatomic, readonly) WBSOpenSearchURLTemplate *suggestionsURLTemplate;

- (void).cxx_destruct;
- (void)_fetchDidFinishWithResponse:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_searchHelperConnection;
- (void)cancelExistingSuggestionsRequest;
- (void)disconnectFromSearchHelperIfNecessary;
- (id)initWithSuggestionsURLTemplate:(id)arg1;
- (bool)isFetching;
- (id)suggestionsURLTemplate;
- (void)updateSuggestionsRequestWithSearchTerms:(id)arg1 userAgentString:(id)arg2 completionHandler:(id /* block */)arg3;

@end

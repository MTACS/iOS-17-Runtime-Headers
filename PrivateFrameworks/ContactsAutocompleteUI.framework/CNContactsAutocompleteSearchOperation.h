
@interface CNContactsAutocompleteSearchOperation : CNAutocompleteSearchOperation <CNAutocompleteFetchDelegate> {
    CNAutocompleteStore * _autocompleteStore;
    CNAutocompleteFetchContext * _fetchContext;
    CNPromise * _fetchRequestPromise;
    CNCancelationToken * _fetchRequestToken;
    bool  _includeContacts;
    bool  _includeRecents;
    bool  _includeServers;
    bool  _includeStewie;
    bool  _includeSuggestions;
    NSNumber * _shouldIncludeGroupResults;
    bool  _shouldUnifyResults;
    bool  _simulateResults;
}

@property (nonatomic, retain) CNAutocompleteStore *autocompleteStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) CNAutocompleteFetchContext *fetchContext;
@property (nonatomic, retain) CNPromise *fetchRequestPromise;
@property (nonatomic, retain) CNCancelationToken *fetchRequestToken;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeContacts;
@property (nonatomic) bool includeRecents;
@property (nonatomic) bool includeServers;
@property (nonatomic) bool includeStewie;
@property (nonatomic) bool includeSuggestions;
@property (nonatomic, retain) NSNumber *shouldIncludeGroupResults;
@property (nonatomic) bool shouldUnifyResults;
@property (nonatomic) bool simulateResults;
@property (readonly) Class superclass;

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3 autocompleteStore:(id)arg4;

- (void).cxx_destruct;
- (id)_simulatedRecipientResults;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)autocompleteStore;
- (void)cancel;
- (void)configureForSearchTypes:(unsigned long long)arg1;
- (id)defaultChildForUnifiedEmailRecipients:(id)arg1;
- (id)fetchContext;
- (id)fetchRequestPromise;
- (id)fetchRequestToken;
- (bool)includeContacts;
- (bool)includeRecents;
- (bool)includeServers;
- (bool)includeStewie;
- (bool)includeSuggestions;
- (id)init;
- (void)main;
- (id)originContextForResult:(id)arg1;
- (void)setAutocompleteStore:(id)arg1;
- (void)setFetchContext:(id)arg1;
- (void)setFetchRequestPromise:(id)arg1;
- (void)setFetchRequestToken:(id)arg1;
- (void)setIncludeContacts:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeServers:(bool)arg1;
- (void)setIncludeStewie:(bool)arg1;
- (void)setIncludeSuggestions:(bool)arg1;
- (void)setShouldIncludeGroupResults:(id)arg1;
- (void)setShouldUnifyResults:(bool)arg1;
- (void)setSimulateResults:(bool)arg1;
- (id)shouldIncludeGroupResults;
- (bool)shouldUnifyResults;
- (bool)simulateResults;
- (id)unifyRecipientsIfNeccesary:(id)arg1;
- (id)unifyingIdentifierForRecipient:(id)arg1;

@end

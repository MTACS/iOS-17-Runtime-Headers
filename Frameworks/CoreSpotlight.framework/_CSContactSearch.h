
@interface _CSContactSearch : NSObject <CNAutocompleteFetchDelegate> {
    NSMutableArray * _accumulatedContacts;
    bool  _autocompleteEnabled;
    <CNCancelable> * _autocompleteRequest;
    id /* block */  _completionHandler;
    bool  _finished;
    bool  _includeRecents;
    NSString * _query;
    unsigned long long  _queryID;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _startTime;
}

@property (nonatomic, readonly) bool autocompleteEnabled;
@property (nonatomic, retain) <CNCancelable> *autocompleteRequest;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeRecents;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) unsigned long long queryID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)autocompleteStore;
+ (id)contactStore;
+ (bool)doesContactMatchTerm:(id)arg1 contact:(id)arg2;
+ (id)filterContactsBasedOnUserQueryString:(id)arg1 contacts:(id)arg2;
+ (id)targetQueue;

- (void).cxx_destruct;
- (bool)autocompleteEnabled;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)autocompleteRequest;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)contactsMatchingQuery:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)finished;
- (void)handleCompletionWithContacts:(id)arg1 error:(id)arg2;
- (bool)includeRecents;
- (id)initWithQuery:(id)arg1 queryID:(unsigned long long)arg2 autocompleteEnabled:(bool)arg3;
- (id)query;
- (unsigned long long)queryID;
- (id)queue;
- (void)setAutocompleteRequest:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)start;
- (void)startAutocompleteContactsSearch;
- (void)startContactsSearch;

@end

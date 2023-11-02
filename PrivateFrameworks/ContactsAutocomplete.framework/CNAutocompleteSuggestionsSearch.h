
@interface CNAutocompleteSuggestionsSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)charactersThreshold;

- (void).cxx_destruct;
- (id)contactStore;
- (id)convertContacts:(id)arg1 request:(id)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)keysToFetchForRequest:(id)arg1;
- (id /* block */)resultTransformWithFactory:(id)arg1 properties:(id)arg2;
- (id /* block */)resultTransformWithRequest:(id)arg1;
- (id)suggestedContactsWithRequest:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@end

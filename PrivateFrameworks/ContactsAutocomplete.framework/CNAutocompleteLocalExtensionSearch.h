
@interface CNAutocompleteLocalExtensionSearch : NSObject <CNAutocompleteSearch> {
    CLSDataStore * _dataStore;
}

@property (nonatomic, readonly) CLSDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDataStore:(id)arg1;

@end

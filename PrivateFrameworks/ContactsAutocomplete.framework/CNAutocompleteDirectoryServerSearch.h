
@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (void)setContactStore:(id)arg1;

@end

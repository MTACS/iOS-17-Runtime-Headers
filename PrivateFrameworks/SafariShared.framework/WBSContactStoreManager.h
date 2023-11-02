
@interface WBSContactStoreManager : NSObject {
    CNContactStore * _contactStore;
    NSMutableDictionary * _temporaryContacts;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

+ (id)sharedContactStoreManager;

- (void).cxx_destruct;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)contactForHandle:(id)arg1 error:(id*)arg2;
- (id)contactStore;
- (id)defaultContainerIdentifier;
- (bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)temporaryContactForIdentity:(id)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@end

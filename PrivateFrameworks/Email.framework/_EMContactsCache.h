
@interface _EMContactsCache : NSObject {
    EFLazyCache * _addressesCache;
    EFLazyCache * _namesCache;
    CNContactStore * _store;
}

@property (nonatomic, readonly) EFLazyCache *addressesCache;
@property (nonatomic, readonly) EFLazyCache *namesCache;
@property (nonatomic, readonly) CNContactStore *store;

- (void).cxx_destruct;
- (void)_contactsChanged:(id)arg1;
- (id)_contactsForKey:(id)arg1 cache:(id)arg2 keysToFetch:(id)arg3 predicateBlock:(id /* block */)arg4 error:(id*)arg5;
- (id)addressesCache;
- (id)allContactEmailAddressesWithError:(id*)arg1;
- (id)contactsForEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)contactsForName:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)initWithStore:(id)arg1;
- (id)namesCache;
- (id)store;

@end

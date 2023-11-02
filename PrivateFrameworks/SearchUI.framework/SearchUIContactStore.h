
@interface SearchUIContactStore : NSObject <SearchUIBatchedCachePrewarmer> {
    NSCache * _contactCache;
    NSObject<OS_dispatch_queue> * _contactFetchingQueue;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) NSCache *contactCache;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *contactFetchingQueue;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)avatarViewControllerDescriptorKeys;
+ (id)contactForPhoneNumber:(id)arg1 email:(id)arg2;
+ (id)placeholderContact;
+ (id)resultRowContactDescriptorKeys;
+ (id)sharedStore;
+ (id)viewControllerDescriptorKeys;

- (void).cxx_destruct;
- (id)batchingItemsForRowModel:(id)arg1;
- (id)cachedContactForIdentifier:(id)arg1;
- (id)cachedContactsForIdentifiers:(id)arg1 withKeyDescriptors:(id)arg2;
- (id)contactCache;
- (id)contactFetchingQueue;
- (id)contactForIdentifier:(id)arg1;
- (id)contactStore;
- (id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2;
- (void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchContactsForIdentifiers:(id)arg1 withKeyDescriptors:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)prewarmCacheForBatchedItems:(id)arg1;
- (void)setContactCache:(id)arg1;
- (void)setContactFetchingQueue:(id)arg1;
- (void)setContactStore:(id)arg1;

@end


@interface CNContainerCache : NSObject {
    ACAccountStore * _accountStore;
    CNCache * _cachedAccounts;
    CNContactStore * _contactStore;
    CNContainer * _primaryiCloudContainer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) CNCache *cachedAccounts;
@property (nonatomic) CNContactStore *contactStore;
@property (nonatomic, retain) CNContainer *primaryiCloudContainer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)os_log;

- (void).cxx_destruct;
- (id)accountForContainer:(id)arg1;
- (id)accountStore;
- (void)accountStoreDidChange;
- (id)cachedAccounts;
- (id)cnAccountForContainer:(id)arg1;
- (id)contactStore;
- (void)contactStoreDidChange;
- (void)dealloc;
- (id)initWithContactStore:(id)arg1;
- (id)onWorkQueue_findPrimaryiCloudContainer;
- (id)primaryiCloudContainer;
- (void)resetAccountCache;
- (void)resetPrimaryiCloudContainer;
- (void)setAccountStore:(id)arg1;
- (void)setCachedAccounts:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setPrimaryiCloudContainer:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

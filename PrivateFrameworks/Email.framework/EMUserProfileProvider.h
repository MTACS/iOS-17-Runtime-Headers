
@interface EMUserProfileProvider : NSObject <EMUserProfileProvider> {
    NSDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    CNContactStore * _contactStore;
    bool  _hasAccountsConfigured;
    NSMutableArray * _knownToBeMyEmail;
    NSMutableArray * _knownToNotBeMyEmail;
    int  _outstandingCacheRefreshes;
}

@property (readonly, copy) NSSet *accountsEmailAddresses;
@property (readonly, copy) NSSet *allEmailAddresses;
@property (nonatomic, retain) NSDictionary *cache;
@property (readonly, copy) NSSet *contactEmailAddresses;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccountsConfigured;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *knownToBeMyEmail;
@property (nonatomic, readonly) NSMutableArray *knownToNotBeMyEmail;
@property (readonly) Class superclass;

+ (bool)doesAddressList:(id)arg1 containAddressInSet:(id)arg2;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (id)_accountsEmailAddresses;
- (id)_contactEmailAddresses;
- (void)_contactsChanged:(id)arg1;
- (bool)_isMyEmailAddressContainedInAddressStrings:(id)arg1;
- (id)accountsEmailAddresses;
- (id)allEmailAddresses;
- (id)cache;
- (id)contact;
- (id)contactEmailAddresses;
- (id)contactStore;
- (id)contactWithKeysToFetch:(id)arg1;
- (bool)hasAccountConfigured;
- (bool)hasAccountsConfigured;
- (id)init;
- (bool)isMyEmailAddressContainedInAddressList:(id)arg1;
- (id)knownToBeMyEmail;
- (id)knownToNotBeMyEmail;
- (void)refreshCachedValues;
- (void)setCache:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)waitForOutstandingCacheRefreshes;

@end

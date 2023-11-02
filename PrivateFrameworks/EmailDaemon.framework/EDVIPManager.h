
@interface EDVIPManager : NSObject <EFLoggable, EMVIPManager> {
    <EDAccountsProvider> * _accountsProvider;
    EAEmailAddressSet * _cachedEmailAddresses;
    CNContactStore * _contactStore;
    <EDVIPManagerDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _initializeLock;
    bool  _initialized;
    NSUbiquitousKeyValueStore * _keyValueStore;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSURL * _plistURL;
    NSMutableDictionary * _vipsByIdentifier;
}

@property (nonatomic, readonly) <EDAccountsProvider> *accountsProvider;
@property (nonatomic, readonly, copy) EAEmailAddressSet *allVIPEmailAddresses;
@property (nonatomic, readonly, copy) NSSet *allVIPs;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EDVIPManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasVIPs;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUbiquitousKeyValueStore *keyValueStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic, readonly) NSURL *plistURL;
@property (readonly) Class superclass;

+ (id)_contactDescriptors;
+ (id)log;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (id)_allVIPEmailAddresses;
- (id)_cloudKeyForIdentifier:(id)arg1;
- (id)_contactForName:(id)arg1 emailAddresses:(id)arg2;
- (id)_contactFromContacts:(id)arg1 matchingMostAddresses:(id)arg2;
- (void)_initializeKVSStore;
- (bool)_isVIPForContact:(id)arg1 orAddresses:(id)arg2;
- (void)_keyValueStoreChanged:(id)arg1;
- (void)_loadVIPs;
- (void)_mergeVIPs;
- (void)_removeVIPsWithIdentifiers:(id)arg1;
- (void)_saveVIPs;
- (void)_saveVIPsLocally;
- (id)_serializedData;
- (void)_synchronizeKVStore;
- (void)_updateCloudWithLocal;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(bool)arg2;
- (id)_validatedCloudVIPFromStore:(id)arg1 withCloudKey:(id)arg2;
- (id)_vipsDictionary;
- (id)accountsProvider;
- (id)allVIPEmailAddresses;
- (id)allVIPWaitForResult;
- (id)allVIPs;
- (id)contactStore;
- (void)dealloc;
- (id)delegate;
- (void)gatherStatisticsWithVIPCount:(unsigned long long)arg1;
- (void)getAllVIPsWithCompletion:(id /* block */)arg1;
- (bool)hasVIPs;
- (id)initWithDirectoryURL:(id)arg1 accountsProvider:(id)arg2 delegate:(id)arg3;
- (id)initWithDirectoryURL:(id)arg1 keyValueStore:(id)arg2 accountsProvider:(id)arg3 contactStore:(id)arg4 delegate:(id)arg5;
- (bool)isVIPAddress:(id)arg1;
- (id)keyValueStore;
- (id)notificationQueue;
- (id)operationQueue;
- (id)plistURL;
- (void)removeVIPsWithEmailAddresses:(id)arg1;
- (void)removeVIPsWithIdentifiers:(id)arg1;
- (void)saveVIPs:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setKeyValueStore:(id)arg1;
- (id)vipWithIdentifier:(id)arg1;

@end


@interface BUAccountsProvider : NSObject <BUAccountsProviding> {
    NSMutableDictionary * _accountIdentifiers;
    ACAccount * _activeStoreAccount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _appleAccountCacheLock;
    <NSObject> * _appleAccountDidChangeNotificationRegisteredToken;
    NSNumber * _cachedIsPrimaryAccountManagedAppleID;
    NSNumber * _cachedIsStoreAccountManagedAppleID;
    ACAccount * _localStoreAccount;
    NSMutableDictionary * _notifyBlocks;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSMutableDictionary * _observerHashTables;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    ACAccount * _primaryAppleAccount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _storeAccountCacheLock;
    <NSObject> * _storeAccountDidChangeNotificationRegisteredToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _tccObserverLock;
    int  _tccObserverToken;
}

@property (nonatomic, retain) NSMutableDictionary *accountIdentifiers;
@property (nonatomic, retain) ACAccount *activeStoreAccount;
@property (nonatomic, retain) <NSObject> *appleAccountDidChangeNotificationRegisteredToken;
@property (nonatomic, copy) NSNumber *cachedIsPrimaryAccountManagedAppleID;
@property (nonatomic, copy) NSNumber *cachedIsStoreAccountManagedAppleID;
@property (nonatomic, readonly, copy) NSString *currentStorefront;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCloudKitEntitlement;
@property (nonatomic, readonly) bool hasRecommendationsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *iCloudAccountName;
@property (nonatomic, readonly, copy) NSString *iCloudIdentity;
@property (nonatomic, readonly) bool isGlobalICloudDriveSyncOptedIn;
@property (nonatomic, readonly) bool isPrimaryAccountManagedAppleID;
@property (nonatomic, readonly) bool isStoreAccountManagedAppleID;
@property (nonatomic, readonly) bool isUserSignedInToiCloud;
@property (nonatomic, readonly) bool isUserSignedInToiTunes;
@property (nonatomic, readonly) NSNumber *lastUsedStoreAccountID;
@property (nonatomic, retain) ACAccount *localStoreAccount;
@property (nonatomic, retain) NSMutableDictionary *notifyBlocks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSMutableDictionary *observerHashTables;
@property (nonatomic, retain) ACAccount *primaryAppleAccount;
@property (nonatomic, retain) <NSObject> *storeAccountDidChangeNotificationRegisteredToken;
@property (readonly) Class superclass;
@property (nonatomic) int tccObserverToken;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (long long)_addObserver:(id)arg1 forAccountType:(unsigned long long)arg2;
- (void)_didReceiveNotification:(id)arg1;
- (long long)_observerCountForAccountType:(unsigned long long)arg1;
- (id)_observersForAccountType:(unsigned long long)arg1;
- (void)_registerNotificationForAccountTypeIfNeeded:(unsigned long long)arg1;
- (long long)_removeObserver:(id)arg1 forAccountType:(unsigned long long)arg2;
- (unsigned long long)_singleAccountTypeForNotification:(id)arg1;
- (void)_unregisterNotificationForAccountType:(unsigned long long)arg1;
- (id)accountIdentifiers;
- (id)activeStoreAccount;
- (void)addObserver:(id)arg1 accountTypes:(unsigned long long)arg2;
- (id)appleAccountDidChangeNotificationRegisteredToken;
- (id)cachedIsPrimaryAccountManagedAppleID;
- (id)cachedIsStoreAccountManagedAppleID;
- (void)clearLastUsedStoreAccountID;
- (id)currentStorefront;
- (void)dealloc;
- (bool)detectedUserSwitchWithId:(id)arg1 outSignedIn:(bool*)arg2 outSignedOut:(bool*)arg3 outAccountNumberChanged:(bool*)arg4;
- (bool)hasCloudKitEntitlement;
- (bool)hasRecommendationsEnabled;
- (id)iCloudAccountName;
- (id)iCloudIdentity;
- (id)init;
- (bool)isGlobalICloudDriveSyncOptedIn;
- (bool)isPrimaryAccountManagedAppleID;
- (bool)isStoreAccountManagedAppleID;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedInToiTunes;
- (id)l_activeStoreAccount;
- (id)l_primaryAppleAccount;
- (id)lastUsedStoreAccountID;
- (id)localStoreAccount;
- (id)notifyBlocks;
- (id)notifyQueue;
- (void)nq_resetAppleAccountCachedValues;
- (void)nq_resetStoreAccountCachedValues;
- (void)nq_setupNotifyBlockForAccountType:(unsigned long long)arg1 currentAccountIdentifier:(id)arg2;
- (void)nq_teardownNotifyBlockForAccountType:(unsigned long long)arg1;
- (void)nq_updateAccountIdentifierAndNotifyObserversForAccountType:(unsigned long long)arg1;
- (void)nq_updateiCloudAccountIdentifierAndNotifyObservers;
- (void)nq_updateiTunesAccountIdentifierAndNotifyObservers;
- (void)observeTCCAccessChangeNotificationIfNeeded;
- (id)observerHashTables;
- (id)primaryAppleAccount;
- (void)removeObserver:(id)arg1 accountTypes:(unsigned long long)arg2;
- (void)setAccountIdentifiers:(id)arg1;
- (void)setActiveStoreAccount:(id)arg1;
- (void)setAppleAccountDidChangeNotificationRegisteredToken:(id)arg1;
- (void)setCachedIsPrimaryAccountManagedAppleID:(id)arg1;
- (void)setCachedIsStoreAccountManagedAppleID:(id)arg1;
- (void)setLocalStoreAccount:(id)arg1;
- (void)setNotifyBlocks:(id)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setObserverHashTables:(id)arg1;
- (void)setPrimaryAppleAccount:(id)arg1;
- (void)setStoreAccountDidChangeNotificationRegisteredToken:(id)arg1;
- (void)setTccObserverToken:(int)arg1;
- (id)storeAccountDidChangeNotificationRegisteredToken;
- (int)tccObserverToken;
- (void)ubiquityIdentityDidChange;
- (void)updateLastUsedStoreAccountID;

@end
